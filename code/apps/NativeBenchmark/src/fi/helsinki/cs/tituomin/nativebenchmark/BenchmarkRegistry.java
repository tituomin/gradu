package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.Benchmark;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkInitialiser;
import fi.helsinki.cs.tituomin.nativebenchmark.benchmark.JavaCounterparts;
import java.util.List;
import java.util.LinkedList;
import java.util.Iterator;

public class BenchmarkRegistry {

    private static List<Benchmark> benchmarks;

    public static long repetitions;

    public static List<Benchmark> getBenchmarks() {
        return benchmarks;
    }

    public static void init(long reps) throws ClassNotFoundException {
        repetitions = reps;
        benchmarks = new LinkedList<Benchmark> ();
        Class jCounterparts = Class.forName("fi.helsinki.cs.tituomin.nativebenchmark.benchmark.JavaCounterparts");
        initNative(reps, jCounterparts);
    }

    public static native void initNative(long repetitions, Class javaCounterparts);

}
