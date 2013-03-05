package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.LinuxPerfRecordTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.Measurement;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkRegistry;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkInitialiser;

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
        this.textView = (TextView) findViewById(R.id.mytextview);
        this.resultView = (TextView) findViewById(R.id.resultview);
        this.button = (Button) findViewById(R.id.mybutton);

        BenchmarkRegistry.repetitions = 100000;
        BenchmarkRegistry.multiplier  = 100000;
        BenchmarkInitialiser.init();

        tempToolSetup();
    }

    public void tempToolSetup() {
        File sd = Environment.getExternalStorageDirectory();
        File profileDir = new File(sd, "perf_data");
        profileDir.mkdir();

        tool = new LinuxPerfRecordTool()
            .set(BasicOption.OUTPUT_FILEPATH, profileDir.getPath())
            .set(BasicOption.MEASURE_LENGTH, "10");

        tool.addObserver(this);
    }

    public void setMessage(int id) {
        this.textView.setText(id);
    }

    public void updateState(ApplicationState.State state) {
        runOnUiThread(new StateChanger(state));
    }
    public void updateState(ApplicationState.State state, Pair<String,String> data) {
        runOnUiThread(new StateChanger(state));
    }

    private class StateChanger implements Runnable {
        private ApplicationState.State state;
        public StateChanger(ApplicationState.State state) {
            this.state = state;
        }
        public void run() {
            setMessage(state.stringId);

            switch (state) {
            case MEASURING:
                button.setEnabled(false);
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
                    try {
                        tool.start(BenchmarkRegistry.getBenchmarks().get(0));
                    }
                    catch (InterruptedException e) {
                        Log.e(TAG, "MeasuringTool.start was interrupted: " + e);
                    }
                    catch (IOException e) {
                        Log.e(TAG, "Measuring caused IOex: " + e);
                        e.printStackTrace();
                    }
                }
            });
        this.updateState(ApplicationState.State.MEASURING);
        measuringThread.start();
    }

    private MeasuringTool tool;
    private TextView textView, resultView;
    private Button button;
    private static final String TAG = "BenchmarkSelector";

    private String tempData;

    private static class MockBenchmark implements Runnable {
        private double killer;
        public void run() {
            long i;
            for (i = 0, killer = Double.MAX_VALUE;
                 i < Long.MAX_VALUE;
                 killer /= 2.0, i++) {
                if (Thread.interrupted()) {
                    return;
                }
            }
        }
    }
}
