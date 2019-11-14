/*
 * nb-qemu-guest
 * 
 * Copyright (c) 2019 Michael Goffioul
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#define LOG_TAG "libnb-qemu-guest"

#include <dlfcn.h>
#include <string.h>
#include <log/log.h>

static char nb_qemu_error[4096] = { '\0' };

extern "C" {
int __pthread_allocate_self(void **stack, void **tls);
void __pthread_deallocate_self(void **stack, size_t *size);
}

extern "C" {

void nb_qemu_initialize() {
    ALOGV("initialize");
}

void *nb_qemu_loadLibrary(const char *filename) {
    ALOGV("loadLibrary: %s", filename);
    void *ret = dlopen(filename, RTLD_LAZY);
    if (!ret) {
        nb_qemu_error[0] = '\0';
        strncat(nb_qemu_error, dlerror(), sizeof(nb_qemu_error) - 1);
    }
    ALOGV("loadLibrary: => %p", ret);
    return ret;
}

const char *nb_qemu_getError() {
    ALOGV("getError: %s", nb_qemu_error);
    return nb_qemu_error;
}

void *nb_qemu_getLibrarySymbol(void *handle, const char *name) {
    ALOGV("getLibrarySymbol: %p, %s", handle, name);
    void *ret = dlsym(handle, name);
    if (!ret) {
        nb_qemu_error[0] = '\0';
        strncat(nb_qemu_error, dlerror(), sizeof(nb_qemu_error) - 1);
    }
    ALOGV("getLibrarySymbol: => %p", ret);
    return ret;
}

int nb_qemu_allocateThread(void **stack, void **tls) {
    return __pthread_allocate_self(stack, tls);
}

void nb_qemu_deallocateThread(void **stack, size_t *size) {
    __pthread_deallocate_self(stack, size);
}

};
