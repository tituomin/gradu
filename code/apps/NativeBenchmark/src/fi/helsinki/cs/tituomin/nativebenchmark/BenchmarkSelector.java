package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.LinuxPerfRecordTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.BasicOption;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.Measurement;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Button;
import android.util.Log;
import java.io.IOException;
import java.io.File;
import android.os.Environment;

public class BenchmarkSelector extends Activity
{
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        this.textView = (TextView) findViewById(R.id.mytextview);
        this.button = (Button) findViewById(R.id.mybutton);

        tempToolSetup();
    }

    public void tempToolSetup() {
        try {
            Process suProcess = Runtime.getRuntime().exec("su");
            int suProcessRetval = suProcess.waitFor();
            boolean retval;
            if (255 != suProcessRetval)
                {
                    // Root access granted
                    retval = true;
                }
            else
                {
                    // Root access denied
                    retval = false;
                }
            Log.v("mt", "retval " + retval);
        }
        catch (Exception e) {
            e.printStackTrace();
        }

        tool = new LinuxPerfRecordTool();
        File sd = Environment.getExternalStorageDirectory();

        File testFile = new File(sd, "foo_test");
        try {
            testFile.createNewFile();
        }
        catch (IOException e) {
            e.printStackTrace();
        }
        
        tool.set(BasicOption.OUTPUT_FILEPATH,
                 sd.getPath() + "/temppi.data");
        tool.set(BasicOption.MEASURE_LENGTH,
                 "10");
    }

    public void setMessage(int id) {
        this.textView.setText(id);
    }

    public void startMeasuring(View view) {
        Measurement m = new Measurement();
        try {
            m = tool.start(new MockBenchmark());
        }
        catch (InterruptedException e) {
            Log.e(TAG, "MeasuringTool.start was interrupted: " + e);
        }
        catch (IOException e) {
            Log.e(TAG, "Measuring caused IOex: " + e);
            e.printStackTrace();
        }
        Log.d(TAG, m.toString());
    }

    private MeasuringTool tool;
    private TextView textView;
    private Button button;
    private static final String TAG = "BenchmarkSelector";

    private MeasuringTool tempTool;

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
