FORCE_ARM_DEBUGGING := true
APP_CFLAGS += -std=c99
APP_CFLAGS += -O0
APP_CFLAGS += -Wall
APP_CFLAGS += -mapcs-frame
APP_CFLAGS += -fno-omit-frame-pointer
APP_CFLAGS += -mtpcs-frame
APP_CFLAGS += -mtpcs-leaf-frame
APP_OPTIM := debug
