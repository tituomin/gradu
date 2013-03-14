
t = """
package fi.helsinki.cs.tituomin.nativebenchmark;

import fi.helsinki.cs.tituomin.nativebenchmark.Benchmark;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkRegistry;
import fi.helsinki.cs.tituomin.nativebenchmark.BenchmarkParameter;
import fi.helsinki.cs.tituomin.nativebenchmark.benchmark.*;
import java.util.List;

public class BenchmarkInitialiser {{

    public static void init(BenchmarkParameter bp) {{
        List<Benchmark> benchmarks = BenchmarkRegistry.getBenchmarks();

        {register_benchmarks}
    }}

}}

"""

def inits(classname):
    return """
    benchmarks.add(new {classname} (BenchmarkRegistry.repetitions, bp));""".format(classname=classname)
