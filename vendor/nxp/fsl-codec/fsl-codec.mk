MAJOR_VERSION := $(shell echo $(PLATFORM_VERSION) | cut -d "." -f1)
ANDROID_VERSION_GE_O := $(shell if [ $(MAJOR_VERSION) -ge 8 ];then echo "true";fi)
ANDROID_VERSION_EQ_P := $(shell if [ $(MAJOR_VERSION) -eq 9 ];then echo "true";fi)
ANDROID_VERSION_GE_Q := $(shell if [ $(MAJOR_VERSION) -ge 10 ];then echo "true";fi)

ifeq ($(ANDROID_VERSION_GE_O), true)
    FSL_CODEC_OUT_PATH := vendor/lib
else
    FSL_CODEC_OUT_PATH := system/lib
endif

ifeq ($(FSL_CODEC_PATH),)
    FSL_CODEC_PATH := device
endif

FSL_PARSER_OUT_PATH := $(FSL_CODEC_OUT_PATH)
FSL_PARSER_OUT_PATH64 := $(FSL_CODEC_OUT_PATH)64
FSL_CODEC_OUT_PATH64 := $(FSL_CODEC_OUT_PATH)64

ifeq ($(ANDROID_VERSION_GE_Q), true)
    FSL_PARSER_OUT_PATH := system/lib/extractors
    FSL_PARSER_OUT_PATH64 := system/lib64/extractors
    ifeq ($(INSTALL_64BIT_LIBRARY), true)
        TARGET_ARCH := arm64
    endif
endif

PRODUCT_COPY_FILES += \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_aac_dec_v2_arm12_elinux.so:$(FSL_CODEC_OUT_PATH)/lib_aac_dec_v2_arm12_elinux.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_aacd_wrap_arm12_elinux_android.so:$(FSL_CODEC_OUT_PATH)/lib_aacd_wrap_arm12_elinux_android.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_mp3_dec_v2_arm12_elinux.so:$(FSL_CODEC_OUT_PATH)/lib_mp3_dec_v2_arm12_elinux.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_mp3d_wrap_arm12_elinux_android.so:$(FSL_CODEC_OUT_PATH)/lib_mp3d_wrap_arm12_elinux_android.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_nb_amr_enc_v2_arm11_elinux.so:$(FSL_CODEC_OUT_PATH)/lib_nb_amr_enc_v2_arm11_elinux.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_wb_amr_enc_arm11_elinux.so:$(FSL_CODEC_OUT_PATH)/lib_wb_amr_enc_arm11_elinux.so

# for pi9, parsers are handled by Android.mk
ifneq ($(ANDROID_VERSION_EQ_P), true)
PRODUCT_COPY_FILES += \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_avi_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_avi_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_flv_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_flv_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_mkv_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_mkv_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_mp4_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_mp4_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_mpg2_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_mpg2_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_ogg_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_ogg_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_amr_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_amr_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_aac_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_aac_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_mp3_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_mp3_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_flac_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_flac_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib/lib_dsf_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH)/lib_dsf_parser_arm11_elinux.3.0.so
endif

ifeq ($(TARGET_ARCH),arm64)
PRODUCT_COPY_FILES += \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_aac_dec_arm_android.so:$(FSL_CODEC_OUT_PATH64)/lib_aac_dec_v2_arm12_elinux.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_aacd_wrap_arm_android.so:$(FSL_CODEC_OUT_PATH64)/lib_aacd_wrap_arm12_elinux_android.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_mp3_dec_arm_android.so:$(FSL_CODEC_OUT_PATH64)/lib_mp3_dec_v2_arm12_elinux.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_mp3d_wrap_arm_android.so:$(FSL_CODEC_OUT_PATH64)/lib_mp3d_wrap_arm12_elinux_android.so

# copy dspc asrc binaries
PRODUCT_COPY_FILES += \
    $(FSL_CODEC_PATH)/fsl-codec/asrc-dspc/release/lib/lib_dspc_asrc_coef_android.so:$(FSL_CODEC_OUT_PATH64)/lib_dspc_asrc_coef_android.so \
    $(FSL_CODEC_PATH)/fsl-codec/asrc-dspc/release/lib/lib_dspc_asrc_android.so:$(FSL_CODEC_OUT_PATH64)/lib_dspc_asrc_android.so \
    $(FSL_CODEC_PATH)/fsl-codec/asrc-dspc/release/exe/asrc-test_android:vendor/bin/asrc-test_android

# when version is pi9, parsers are not copied here, but handled by Android.mk
ifneq ($(ANDROID_VERSION_EQ_P), true)
PRODUCT_COPY_FILES += \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_avi_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_avi_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_flv_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_flv_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_mkv_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_mkv_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_mp4_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_mp4_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_mpg2_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_mpg2_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_ogg_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_ogg_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_amr_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_amr_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_aac_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_aac_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_mp3_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_mp3_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_dsf_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_dsf_parser_arm11_elinux.3.0.so \
    $(FSL_CODEC_PATH)/fsl-codec/lib64/lib_flac_parser_arm11_elinux.3.0.so:$(FSL_PARSER_OUT_PATH64)/lib_flac_parser_arm11_elinux.3.0.so
endif

endif
