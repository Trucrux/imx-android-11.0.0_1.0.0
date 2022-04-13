
LOCAL_PATH := $(call my-dir)

ifeq ($(PREBUILT_FSL_IMX_GPU),true)
include $(CLEAR_VARS)
LOCAL_MODULE :=gmem_info
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_PROPRIETARY_MODULE := true
LOCAL_SRC_FILES :=  bin/gmem_info
LOCAL_CHECK_ELF_FILES := false
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE :=gpu-top
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_PROPRIETARY_MODULE := true
LOCAL_SRC_FILES :=  bin/gpu-top
LOCAL_CHECK_ELF_FILES := false
include $(BUILD_PREBUILT)
endif
