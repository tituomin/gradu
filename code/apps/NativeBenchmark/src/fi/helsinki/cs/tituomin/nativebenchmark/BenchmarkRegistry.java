package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.Benchmark;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkInitialiser;
import fi.helsinki.cs.tituomin.nativebenchmark.benchmark.JavaCounterpart;
import java.util.List;
import java.util.LinkedList;
import java.util.Iterator;

public class BenchmarkRegistry {

    private static List<Benchmark> benchmarks = new LinkedList<Benchmark> ();

    public static long repetitions, multiplier;

    public static List<Benchmark> getBenchmarks() {
        return benchmarks;
    }

    public static init(long reps, long mul) {
        repetitions = reps;
        multiplier = mul;
        Class jCounterparts = JavaCounterpart;
        initNative(reps, mul, jCounterparts);

    }

    public static native void initNative(long repetitions, long multiplier, Class javaCounterparts);

}
