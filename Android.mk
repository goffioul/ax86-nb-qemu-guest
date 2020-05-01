#
# nb-qemu-guest
#
# Copyright (c) 2019 Michael Goffioul
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, see <http://www.gnu.org/licenses/>.
#

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libnb-qemu-guest
LOCAL_SRC_FILES := libnb.cpp jnienv.c
LOCAL_SHARED_LIBRARIES := liblog libutilscallstack
LOCAL_LDFLAGS := -Wl,-dynamic-linker,/system/lib/arm/linker
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libEGL-nb
LOCAL_SRC_FILES := libEGL.c
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_RELATIVE_PATH := nb
LOCAL_ARM_MODE := arm
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libGLESv1_CM-nb
LOCAL_SRC_FILES := libGLESv1_CM.c
LOCAL_LDFLAGS = -Wl,-soname,libGLESv1_CM.so
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_RELATIVE_PATH := nb
LOCAL_ARM_MODE := arm
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libGLESv2-nb
LOCAL_SRC_FILES := libGLESv3.c
LOCAL_LDFLAGS = -Wl,-soname,libGLESv2.so
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_RELATIVE_PATH := nb
LOCAL_ARM_MODE := arm
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libGLESv3-nb
LOCAL_SRC_FILES := libGLESv3.c
LOCAL_LDFLAGS = -Wl,-soname,libGLESv3.so
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_RELATIVE_PATH := nb
LOCAL_ARM_MODE := arm
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libOpenSLES-nb
LOCAL_SRC_FILES := \
	libOpenSLES.c \
	libOpenSLES.iid.c \
	libOpenSLES.itf.cpp
LOCAL_CFLAGS := -fvisibility=hidden
LOCAL_LDFLAGS = -Wl,-soname,libOpenSLES.so
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_HEADER_LIBRARIES := libOpenSLES_headers
LOCAL_MODULE_RELATIVE_PATH := nb
LOCAL_ARM_MODE := arm
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libandroid-nb
LOCAL_SRC_FILES := libandroid.c
LOCAL_LDFLAGS = -Wl,-soname,libandroid.so
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_RELATIVE_PATH := nb
LOCAL_ARM_MODE := arm
include $(BUILD_SHARED_LIBRARY)

QEMU_RUNTIME_ENVIRONMENT := \
	$(TARGET_OUT)/apex/com.android.runtime.debug/lib/bionic/libc.so \
	$(TARGET_OUT)/apex/com.android.runtime.debug/lib/bionic/libdl.so \
	$(TARGET_OUT)/apex/com.android.runtime.debug/lib/bionic/libm.so \
	$(TARGET_OUT)/apex/com.android.runtime.debug/bin/linker \
	$(TARGET_OUT)/lib/android.frameworks.bufferhub@1.0.so \
	$(TARGET_OUT)/lib/android.hardware.cas@1.0.so \
	$(TARGET_OUT)/lib/android.hardware.cas.native@1.0.so \
	$(TARGET_OUT)/lib/android.hardware.configstore@1.0.so \
	$(TARGET_OUT)/lib/android.hardware.configstore@1.1.so \
	$(TARGET_OUT)/lib/android.hardware.configstore-utils.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.allocator@2.0.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.allocator@3.0.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.bufferqueue@1.0.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.bufferqueue@2.0.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.common@1.0.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.common@1.1.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.common@1.2.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.mapper@2.0.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.mapper@2.1.so \
	$(TARGET_OUT)/lib/android.hardware.graphics.mapper@3.0.so \
	$(TARGET_OUT)/lib/android.hardware.media@1.0.so \
	$(TARGET_OUT)/lib/android.hardware.media.omx@1.0.so \
	$(TARGET_OUT)/lib/android.hardware.memtrack@1.0.so \
	$(TARGET_OUT)/lib/android.hidl.allocator@1.0.so \
	$(TARGET_OUT)/lib/android.hidl.memory@1.0.so \
	$(TARGET_OUT)/lib/android.hidl.memory.token@1.0.so \
	$(TARGET_OUT)/lib/android.hidl.token@1.0.so \
	$(TARGET_OUT)/lib/android.hidl.token@1.0-utils.so \
	$(TARGET_OUT)/lib/android.system.suspend@1.0.so \
	$(TARGET_OUT)/lib/ld-android.so \
	$(TARGET_OUT)/lib/libandroidfw.so \
	$(TARGET_OUT)/lib/libandroidicu.so \
	$(TARGET_OUT)/lib/libandroid_runtime.so \
	$(TARGET_OUT)/lib/libandroid.so \
	$(TARGET_OUT)/lib/libappfuse.so \
	$(TARGET_OUT)/lib/libaudioclient.so \
	$(TARGET_OUT)/lib/libaudiomanager.so \
	$(TARGET_OUT)/lib/libaudiopolicy.so \
	$(TARGET_OUT)/lib/libaudioutils.so \
	$(TARGET_OUT)/lib/libbacktrace.so \
	$(TARGET_OUT)/lib/libbase.so \
	$(TARGET_OUT)/lib/libbinder.so \
	$(TARGET_OUT)/lib/libbinderthreadstate.so \
	$(TARGET_OUT)/lib/libbpf_android.so \
	$(TARGET_OUT)/lib/libbpf.so \
	$(TARGET_OUT)/lib/libbufferhubqueue.so \
	$(TARGET_OUT)/lib/libbufferhub.so \
	$(TARGET_OUT)/lib/libc_malloc_debug.so \
	$(TARGET_OUT)/lib/libcamera_client.so \
	$(TARGET_OUT)/lib/libcamera_metadata.so \
	$(TARGET_OUT)/lib/libcgrouprc.so \
	$(TARGET_OUT)/lib/libcrypto.so \
	$(TARGET_OUT)/lib/libc++.so \
	$(TARGET_OUT)/lib/libcutils.so \
	$(TARGET_OUT)/lib/libdebuggerd_client.so \
	$(TARGET_OUT)/lib/libdexfile_support.so \
	$(TARGET_OUT)/lib/libdl_android.so \
	$(TARGET_OUT)/lib/libdng_sdk.so \
	$(TARGET_OUT)/lib/libdrmframework.so \
	$(TARGET_OUT)/lib/libEGL.so \
	$(TARGET_OUT)/lib/libETC1.so \
	$(TARGET_OUT)/lib/libexpat.so \
	$(TARGET_OUT)/lib/libft2.so \
	$(TARGET_OUT)/lib/libGLESv1_CM.so \
	$(TARGET_OUT)/lib/libGLESv2.so \
	$(TARGET_OUT)/lib/libGLESv3.so \
	$(TARGET_OUT)/lib/libgraphicsenv.so \
	$(TARGET_OUT)/lib/libgui.so \
	$(TARGET_OUT)/lib/libhardware_legacy.so \
	$(TARGET_OUT)/lib/libhardware.so \
	$(TARGET_OUT)/lib/libharfbuzz_ng.so \
	$(TARGET_OUT)/lib/libheif.so \
	$(TARGET_OUT)/lib/libhidlallocatorutils.so \
	$(TARGET_OUT)/lib/libhidlbase.so \
	$(TARGET_OUT)/lib/libhidl-gen-utils.so \
	$(TARGET_OUT)/lib/libhidlmemory.so \
	$(TARGET_OUT)/lib/libhidltransport.so \
	$(TARGET_OUT)/lib/libhwbinder.so \
	$(TARGET_OUT)/lib/libhwui.so \
	$(TARGET_OUT)/lib/libicui18n.so \
	$(TARGET_OUT)/lib/libicuuc.so \
	$(TARGET_OUT)/lib/libimg_utils.so \
	$(TARGET_OUT)/lib/libinput.so \
	$(TARGET_OUT)/lib/libjpeg.so \
	$(TARGET_OUT)/lib/liblog.so \
	$(TARGET_OUT)/lib/liblzma.so \
	$(TARGET_OUT)/lib/libmedia_helper.so \
	$(TARGET_OUT)/lib/libmediametrics.so \
	$(TARGET_OUT)/lib/libmedia_omx_client.so \
	$(TARGET_OUT)/lib/libmedia_omx.so \
	$(TARGET_OUT)/lib/libmedia.so \
	$(TARGET_OUT)/lib/libmediautils.so \
	$(TARGET_OUT)/lib/libmeminfo.so \
	$(TARGET_OUT)/lib/libmemtrack.so \
	$(TARGET_OUT)/lib/libmemunreachable.so \
	$(TARGET_OUT)/lib/libminikin.so \
	$(TARGET_OUT)/lib/libnativebridge_lazy.so \
	$(TARGET_OUT)/lib/libnativehelper.so \
	$(TARGET_OUT)/lib/libnativeloader_lazy.so \
	$(TARGET_OUT)/lib/libnativewindow.so \
	$(TARGET_OUT)/lib/libnblog.so \
	$(TARGET_OUT)/lib/libnb-qemu-guest.so \
	$(TARGET_OUT)/lib/libnetdbpf.so \
	$(TARGET_OUT)/lib/libnetd_client.so \
	$(TARGET_OUT)/lib/libnetdutils.so \
	$(TARGET_OUT)/lib/libOpenMAXAL.so \
	$(TARGET_OUT)/lib/libOpenSLES.so \
	$(TARGET_OUT)/lib/libpackagelistparser.so \
	$(TARGET_OUT)/lib/libpcre2.so \
	$(TARGET_OUT)/lib/libpdfium.so \
	$(TARGET_OUT)/lib/libpdx_default_transport.so \
	$(TARGET_OUT)/lib/libpiex.so \
	$(TARGET_OUT)/lib/libpng.so \
	$(TARGET_OUT)/lib/libprocessgroup.so \
	$(TARGET_OUT)/lib/libprocinfo.so \
	$(TARGET_OUT)/lib/libprotobuf-cpp-lite.so \
	$(TARGET_OUT)/lib/libRScpp.so \
	$(TARGET_OUT)/lib/libselinux.so \
	$(TARGET_OUT)/lib/libsensor.so \
	$(TARGET_OUT)/lib/libsonivox.so \
	$(TARGET_OUT)/lib/libsoundtrigger.so \
	$(TARGET_OUT)/lib/libspeexresampler.so \
	$(TARGET_OUT)/lib/libsqlite.so \
	$(TARGET_OUT)/lib/libstagefright_codecbase.so \
	$(TARGET_OUT)/lib/libstagefright_foundation.so \
	$(TARGET_OUT)/lib/libstagefright_http_support.so \
	$(TARGET_OUT)/lib/libstagefright_omx_utils.so \
	$(TARGET_OUT)/lib/libstagefright.so \
	$(TARGET_OUT)/lib/libstatslog.so \
	$(TARGET_OUT)/lib/libstdc++.so \
	$(TARGET_OUT)/lib/libsync.so \
	$(TARGET_OUT)/lib/libtinyxml2.so \
	$(TARGET_OUT)/lib/libui.so \
	$(TARGET_OUT)/lib/libunwindstack.so \
	$(TARGET_OUT)/lib/libusbhost.so \
	$(TARGET_OUT)/lib/libutils.so \
	$(TARGET_OUT)/lib/libvibrator.so \
	$(TARGET_OUT)/lib/libvintf.so \
	$(TARGET_OUT)/lib/libvndksupport.so \
	$(TARGET_OUT)/lib/libvulkan.so \
	$(TARGET_OUT)/lib/libwilhelm.so \
	$(TARGET_OUT)/lib/libxml2.so \
	$(TARGET_OUT)/lib/libziparchive.so \
	$(TARGET_OUT)/lib/libz.so \
	$(TARGET_OUT)/lib/server_configurable_flags.so

QEMU_RUNTIME_NB_ENVIRONMENT := \
	$(TARGET_OUT)/lib/nb/libEGL-nb.so \
	$(TARGET_OUT)/lib/nb/libGLESv1_CM-nb.so \
	$(TARGET_OUT)/lib/nb/libGLESv2-nb.so \
	$(TARGET_OUT)/lib/nb/libGLESv3-nb.so \
	$(TARGET_OUT)/lib/nb/libOpenSLES-nb.so

libnb-qemu-runtime: $(TARGET_OUT)/lib/libnb-qemu-guest.so $(QEMU_RUNTIME_NB_ENVIRONMENT) $(QEMU_RUNTIME_ENVIRONMENT)

.PHONY: libnb-qemu-runtime libnb-qemu-runtime-copy
