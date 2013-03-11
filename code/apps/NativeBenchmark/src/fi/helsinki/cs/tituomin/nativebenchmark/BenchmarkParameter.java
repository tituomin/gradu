package fi.helsinki.cs.tituomin.nativebenchmark;

public class BenchmarkParameter {

    private native int initReturnvalues();
    private native void freeReturnvalues();

    public boolean[] retrieveBooleanArray() {
        return new boolean[] {true, false, true};
    }
    public byte[] retrieveByteArray() {
        return new byte[] {1, 2, 3};
    }
    public char[] retrieveCharArray() {
        return new char[] {'a', 'b', 'c'};
    }
    public double[] retrieveDoubleArray() {
        return new double[] {1.0, 1.1, 1.2};
    }
    public float[] retrieveFloatArray() {
        return new float[] {1.0f, 1.1f, 1.2f};
    }
    public int[] retrieveIntArray() {
        return new int[] {1, 2, 3};
    }
    public long[] retrieveLongArray() {
        return new long[] {4, 5, 6};
    }
    public short[] retrieveShortArray() {
        return new short[] {7, 8, 9};
    }
    public Object[] retrieveObjectArray() {
        return new String[] {"ab", "cd", "kissa", "kävelee"};
    }
    public Object retrieveObject() {
        return retrieveString();
    }
    public Class retrieveClass() {
        return retrieveString().getClass();
    }
    public String retrieveString() {
        return "Killer bee";
    }
    public Throwable retrieveThrowable() {
        return new Exception();
    }

}

