%define device suzu
%define vendor sony

%define rpm_device f5121
%define rpm_vendor qualcomm

%define vendor_pretty Sony
%define device_pretty Xperia X

%define installable_zip 1

%define makefstab_skip_entries /tmp

%define straggler_files\
    /selinux_version\
    /service_contexts\
%{nil}

%include rpm/dhd/droid-hal-device.inc

