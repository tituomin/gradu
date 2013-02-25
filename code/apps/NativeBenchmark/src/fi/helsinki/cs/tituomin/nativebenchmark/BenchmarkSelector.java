package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.LinuxPerfRecordTool;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Button;

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

        this.tool = new LinuxPerfRecordTool();
    }

    public void setMessage(int id) {
        this.textView.setText(id);
    }

    public void startMeasuring(View view) {
        
    }

    private MeasuringTool tool;
    private TextView textView;
    private Button button;
    
}
