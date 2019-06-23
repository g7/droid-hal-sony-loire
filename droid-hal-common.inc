%define vendor sony

%define rpm_vendor qualcomm

%define have_custom_img_boot 1
%define have_custom_img_recovery 1

%define droid_target_aarch64 1

%define pre_actions sudo update-java-alternatives -s java-1.8.0-openjdk-amd64

# On Android 8 the system partition is (intended to be) mounted on /.
%define makefstab_skip_entries / /vendor /system none /sys/fs/pstore /dev/cpuctl

%define straggler_files\
   /bugreports\
   /d\
   /dsp\
   /nonplat_file_contexts\
   /nonplat_hwservice_contexts\
   /nonplat_property_contexts\
   /nonplat_seapp_contexts\
   /nonplat_service_contexts\
   /plat_file_contexts\
   /plat_hwservice_contexts\
   /plat_property_contexts\
   /plat_seapp_contexts\
   /plat_service_contexts\
   /sdcard\
   /vendor\
   /verity_key\
   /vndservice_contexts\
%{nil}

%define android_config \
#define WANT_ADRENO_QUIRKS 1 \
%{nil}

Requires: droid-system
Requires: droid-system-vendor
Source99: droid-hal-common.inc
