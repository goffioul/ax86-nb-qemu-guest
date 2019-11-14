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
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_LDFLAGS := -Wl,-dynamic-linker,/system/lib/arm/linker
include $(BUILD_SHARED_LIBRARY)
