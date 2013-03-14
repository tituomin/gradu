
from benchmark_generator import create_benchmarks
from templates import java_registry_init

import sys
from sys import argv
import os.path
import os
import logging

# Log everything, and send it to stderr.
logging.basicConfig(level=logging.DEBUG)

def write_benchmarks(c_output, c_run_output, java_output_dir):

    benchmarks = create_benchmarks()
    c_output.write(benchmarks['c'])
    c_run_output.write(benchmarks['c_run'])

    benchmark_inits = []

    for benchmark in benchmarks['java']:
        java_output_path = os.path.join(
            java_output_dir,
            benchmark["path"])

        try:
            os.makedirs(java_output_path)
        except OSError:
            pass
        
        java_output = open(
            os.path.join(
                java_output_path,
                benchmark["filename"]), 'w')

        java_output.write(benchmark["code"])
        benchmark_inits.append(java_registry_init.inits(benchmark["class"]))

    path = os.path.join(
        java_output_dir,
        'fi/helsinki/cs/tituomin/nativebenchmark',
        'BenchmarkInitialiser.java')

    init_output = open(path, 'w')
    init_output.write(java_registry_init.t.format(register_benchmarks = "\n".join(benchmark_inits)))

    classes = [bm['class'] for bm in benchmarks['java']]
    return classes
 
if __name__ == "__main__":
    try:
        c_output_name = argv[1]
        c_run_output_name = argv[2]
        java_output_dir = argv[3]
        c_output = open(c_output_name, 'w')
        c_run_output = open(c_run_output_name, 'w')
        classes = write_benchmarks(c_output, c_run_output, java_output_dir)
        print(",".join(classes))
    except Exception as e:
        logging.exception("Exception was thrown.")
        sys.exit(1)
    else:
        sys.exit(0)
