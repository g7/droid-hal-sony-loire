%define vendor sony

%define rpm_vendor qualcomm

%define have_custom_img_boot 1
%define have_custom_img_recovery 1

%define droid_target_aarch64 1

%define pre_actions sudo update-java-alternatives -s java-1.7.0-openjdk-amd64

%define makefstab_skip_entries /system none /sys/fs/pstore /dev/cpuctl

%define straggler_files\
    /selinux_version\
    /service_contexts\
%{nil}

%define android_config \
#define WANT_ADRENO_QUIRKS 1 \
%{nil}

Requires: droid-system
