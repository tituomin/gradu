package fi.helsinki.cs.tituomin.nativebenchmark;

public class BenchmarkParameter {

    public static boolean[] getBooleanArray(MeasuringOption typeSpecs) {
        return new boolean[] {true, false, true};
    }
    public static byte[] getByteArray(MeasuringOption typeSpecs) {
        return new byte[] {1, 2, 3};
    }
    public static char[] getCharArray(MeasuringOption typeSpecs) {
        return new char[] {'a', 'b', 'c'};
    }
    public static double[] getDoubleArray(MeasuringOption typeSpecs) {
        return new double[] {1.0, 1.1, 1.2};
    }
    public static float[] getFloatArray(MeasuringOption typeSpecs) {
        return new float[] {1.0f, 1.1f, 1.2f};
    }
    public static int[] getIntArray(MeasuringOption typeSpecs) {
        return new int[] {1, 2, 3};
    }
    public static long[] getLongArray(MeasuringOption typeSpecs) {
        return new long[] {4, 5, 6};
    }
    public static short[] getShortArray(MeasuringOption typeSpecs) {
        return new short[] {7, 8, 9};
    }
    public static Object[] getObjectArray(MeasuringOption typeSpecs) {
        return new String[] {"ab", "cd", "kissa", "kävelee"};
    }
    public static Object getObject(MeasuringOption typeSpecs) {
        return getString(typeSpecs);
    }
    public static Class getClass(MeasuringOption typeSpecs) {
        return getString(typeSpecs).getClass();
    }
    public static String getString(MeasuringOption typeSpecs) {
        return "Killer bee";
    }
    public static Throwable getThrowable(MeasuringOption typeSpecs) {
        return new Exception();
    }

}

