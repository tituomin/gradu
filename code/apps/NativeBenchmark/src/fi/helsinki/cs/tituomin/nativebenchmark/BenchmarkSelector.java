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

public class BenchmarkSelector extends Activity implements ApplicationState {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.main);
        this.textView   = (TextView) findViewById(R.id.mytextview);
        this.resultView = (TextView) findViewById(R.id.resultview);
        this.button     = (Button)   findViewById(R.id.mybutton);

        BenchmarkRegistry.repetitions = 1000;
        BenchmarkRegistry.multiplier  = 1000;
        BenchmarkInitialiser.init();
    }

    public void setMessage(int id) {
        this.textView.setText(id);
    }

    public void setMessage(String message) {
        this.textView.setText(message);
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
                setMessage(message);
            }


            switch (state) {
            case MEASURING:
                button.setEnabled(false);
                break;
            case MILESTONE:
                break;
            case MEASURING_FINISHED:
                for (Pair<String,String> m : tool.getMeasurement()) {
                    resultView.append(m.first + ": " + m.second + "\n");
                }
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
                    BenchmarkRunner.runBenchmarks(BenchmarkSelector.this);
                }
            });
        this.updateState(ApplicationState.State.MEASURING);
        measuringThread.start();
    }

    private MeasuringTool tool;
    private TextView textView, resultView;
    private Button button;
    private static final String TAG = "BenchmarkSelector";

    static {
        System.loadLibrary("nativebenchmark");
    }

}
