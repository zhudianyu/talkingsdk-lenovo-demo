LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := SdkBase_release
LOCAL_MODULE_FILENAME := libSdkBase
LOCAL_SRC_FILES := obj/local/$(TARGET_ARCH_ABI)/libSdkBase.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/jni

ifeq ($(TARGET_ARCH_ABI),armeabi-v7a)
    LOCAL_CFLAGS := -DHAVE_NEON=1
endif

include $(PREBUILT_STATIC_LIBRARY)
