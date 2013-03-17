package fi.helsinki.cs.tituomin.nativebenchmark.measuringtool;

import java.util.List;
import java.io.IOException;
import android.os.SystemClock;

import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringTool;
import fi.helsinki.cs.tituomin.nativebenchmark.measuringtool.MeasuringOption;
import android.util.Log;

public class ResponseTimeRecorder extends MeasuringTool {

    protected List<MeasuringOption> defaultOptions(List<MeasuringOption> options) {
        // no options needed, time is returned as is (not in extra file)
        return options;
    }

    public Measurement start(Runnable benchmark)
    throws InterruptedException, IOException {

        Thread benchmarkThread = new Thread(benchmark);
        long endTime = 0, startTime = SystemClock.uptimeMillis();
        benchmarkThread.start();
        try {
            benchmarkThread.join();        
            // todo mainitse tekstissä toteutus (ks. todo.org)
            endTime = SystemClock.uptimeMillis();
            // todo: epätarkkuus, init ym. ? 
        }
        catch (InterruptedException e) {
            measurement.addData("ERROR", "interrupted");
            return measurement;
        }
        measurement.addData("response_time_millis", "" + (endTime - startTime));
        return measurement;
    }
}
