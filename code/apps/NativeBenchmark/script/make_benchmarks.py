
from sys import argv
import os.path

def mock_impl(c_output, java_output_dir):
    c_output.write(
        """
#include <jni.h>
#include <android/log.h>
#include "natives.h"

JNIEXPORT void JNICALL
Java_fi_helsinki_cs_tituomin_nativebenchmark_BoomTest_print
(JNIEnv *env, jobject obj)
{
    const char *tag = "boomfactor";
    const char *text = "killer bee";
    __android_log_write(ANDROID_LOG_INFO, tag, text);
    return;
}


""")

    java_output = open(os.path.join(
        java_output_dir,
        "fi/helsinki/cs/tituomin/nativebenchmark/BoomTest.java"), 'w')
    

    java_output.write("""

package fi.helsinki.cs.tituomin.nativebenchmark;

class BoomTest {
    private native void print();
    public static void main(String[] args) {
        new BoomTest(  ).print();
    }

    static {
        System.loadLibrary("nativebenchmark");
    }
}

""")
    
    return "fi.helsinki.cs.tituomin.nativebenchmark.BoomTest"
 
if __name__ == "__main__":
    c_output_name = argv[1]
    java_output_dir = argv[2]
    c_output = open(c_output_name, 'w')
    
    print(mock_impl(c_output, java_output_dir))
