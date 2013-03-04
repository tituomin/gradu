
#from benchmarks.conf import config
from python_java_generator import create_benchmarks

from sys import argv
import os.path

def write_benchmarks(c_output, java_output_dir):

    benchmarks = create_benchmarks()
    c_output.write(benchmarks['c'])
    classes = []

    for benchmark in benchmarks['java']:
        java_output = open(
            os.path.join(
                java_output_dir,
                benchmark["filename"]), 'w')

        java_output.write(benchmark["code"])
        classes.append[benchmark["class"]]

    return ','.join([bm['class'] for bm in benchmarks['java']])
 
if __name__ == "__main__":
    c_output_name = argv[1]
    java_output_dir = argv[2]
    c_output = open(c_output_name, 'w')
    
    print(write_benchmarks(c_output, java_output_dir))
