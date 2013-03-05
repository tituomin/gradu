package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkInitialiser;
import java.util.List;
import java.util.LinkedList;
import java.util.Iterator;

public class BenchmarkRegistry {

    private static List<Runnable> benchmarks = new LinkedList<Runnable> ();

    public static long repetitions, multiplier;

    public static List<Runnable> getBenchmarks() {
        return benchmarks;
    }

}
