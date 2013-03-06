package fi.helsinki.cs.tituomin.nativebenchmark;

public class BenchmarkParameter {

    public static boolean[] retrieveBooleanArray() {
        return new boolean[] {true, false, true};
    }
    public static byte[] retrieveByteArray() {
        return new byte[] {1, 2, 3};
    }
    public static char[] retrieveCharArray() {
        return new char[] {'a', 'b', 'c'};
    }
    public static double[] retrieveDoubleArray() {
        return new double[] {1.0, 1.1, 1.2};
    }
    public static float[] retrieveFloatArray() {
        return new float[] {1.0f, 1.1f, 1.2f};
    }
    public static int[] retrieveIntArray() {
        return new int[] {1, 2, 3};
    }
    public static long[] retrieveLongArray() {
        return new long[] {4, 5, 6};
    }
    public static short[] retrieveShortArray() {
        return new short[] {7, 8, 9};
    }
    public static Object[] retrieveObjectArray() {
        return new String[] {"ab", "cd", "kissa", "kävelee"};
    }
    public static Object retrieveObject() {
        return retrieveString();
    }
    public static Class retrieveClass() {
        return retrieveString().getClass();
    }
    public static String retrieveString() {
        return "Killer bee";
    }
    public static Throwable retrieveThrowable() {
        return new Exception();
    }

}

