package fi.helsinki.cs.tituomin.nativebenchmark;
import android.util.Pair;

public interface ApplicationState {
    public void updateState(State state);
    public void updateState(State state, String message);

    public static enum State {
        INITIALISED        ( R.string.app_name ),
        MEASURING          ( R.string.measuring_started ),
        MILESTONE          ( R.string.measuring_milestone ),
        ERROR              ( R.string.error ),
        MEASURING_FINISHED ( R.string.measuring_finished );

        public final int stringId;
        State(int stringId) {
            this.stringId = stringId;
        }
    }
}
