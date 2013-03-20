package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.LinuxPerfRecordTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.Measurement;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkRegistry;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkInitialiser;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkRunner;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Button;
import android.util.Log;
import android.util.Pair;
import java.io.IOException;
import java.io.File;
import android.os.Environment;
import android.content.res.Resources;
import android.widget.NumberPicker;
import android.view.WindowManager;
import android.os.PowerManager;
import android.content.Context;

public class BenchmarkSelector extends Activity implements ApplicationState {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.main);

        this.resultView = (TextView)     findViewById(R.id.resultview);
        this.button     = (Button)       findViewById(R.id.mybutton);
        this.repView    = (TextView)     findViewById(R.id.repetitions);

        this.numPick    = (NumberPicker) findViewById(R.id.picker_num);
        this.expPick    = (NumberPicker) findViewById(R.id.picker_exp);

        NumberPicker.OnValueChangeListener listener = new RepsListener();

        numPick.setMaxValue(9);
        expPick.setMaxValue(18);

        numPick.setMinValue(1);
        expPick.setMinValue(0);

        numPick.setValue(1);
        expPick.setValue(6);

        numPick.setOnValueChangedListener(listener);
        expPick.setOnValueChangedListener(listener);

        this.resources  = getResources();
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        PowerManager pm = (PowerManager) getSystemService(Context.POWER_SERVICE);
        wakeLock = pm.newWakeLock(PowerManager.PARTIAL_WAKE_LOCK, "Benchmarking");
    }

    public void setMessage(int id) {
        this.resultView.setText(id);
    }

    public void setMessage(String message) {
        this.resultView.setText(message);
    }

    public void setMessage(int id, String message) {
        this.resultView.setText(resources.getString(id) + " " + message);
    }

    public void updateState(ApplicationState.State state) {
        runOnUiThread(new StateChanger(state));
    }
    public void updateState(ApplicationState.State state, String message) {
        runOnUiThread(new StateChanger(state, message));
    }

    private class StateChanger implements Runnable {
        private ApplicationState.State state;
        private String message;

        public StateChanger(ApplicationState.State state) {
            this.state = state;
        }
        public StateChanger(ApplicationState.State state, String message) {
            this.state = state;
            this.message = message;
        }

        public void run() {
            if (message == null) {
                setMessage(state.stringId);
            }
            else {
                setMessage(state.stringId, message);
            }


            switch (state) {
            case MEASURING:
                wakeLock.acquire();
                button.setEnabled(false);
                break;
            case MILESTONE:
                break;
            case MEASURING_FINISHED:
                wakeLock.release();

                // fallthrough
            case INITIALISED:
                button.setEnabled(true);
                break;
            }
        }
    }

    public void startMeasuring(View view) {
        Thread measuringThread = new Thread(
            new Runnable () {
                public void run() {
                    BenchmarkRunner.runBenchmarks(BenchmarkSelector.this, repetitions);
                }
            });
        this.updateState(ApplicationState.State.MEASURING);

        measuringThread.start();
    }

    private class RepsListener implements NumberPicker.OnValueChangeListener {
        public void onValueChange(NumberPicker picker, int oldVal, int newVal) {
            long exp = BenchmarkSelector.this.expPick.getValue();
            long value = BenchmarkSelector.this.numPick.getValue();
            while (exp-- > 0) { value *= 10; }
            repetitions = value;
            repView.setText("" + repetitions);
        }
    }

    private MeasuringTool tool;
    private TextView textView, resultView, repView;
    private NumberPicker numPick, expPick;
    private Button button;
    private Resources resources;
    private long repetitions;
    private static final String TAG = "BenchmarkSelector";
    private PowerManager.WakeLock wakeLock;

    static {
        System.loadLibrary("nativebenchmark");
    }

}
