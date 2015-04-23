APP_ABI := armeabi armeabi-v7a
APP_PLATFORM := android-10

APP_STL := c++_static
NDK_TOOLCHAIN_VERSION=clang

APP_CPPFLAGS := -frtti -DCC_ENABLE_CHIPMUNK_INTEGRATION=1 -std=c++11 -fsigned-char  -Wno-format-security -Wno-write-strings -Wmultichar
APP_LDFLAGS := -latomic


NDK_DEBUG := 1
APP_DEBUG := $(strip $(NDK_DEBUG))
ifeq ($(APP_DEBUG),1)
  APP_CPPFLAGS += -DCOCOS2D_DEBUG=1
  APP_OPTIM := debug
else
  APP_CPPFLAGS += -DNDEBUG
  APP_OPTIM := release
endif
