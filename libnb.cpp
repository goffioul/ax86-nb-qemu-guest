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
//#define LOG_NDEBUG 0

#include <dlfcn.h>
#include <android/dlext.h>
#include <string.h>
#include <log/log.h>
#include <utils/CallStack.h>

static char nb_qemu_error[4096] = { '\0' };

extern "C" {
int __pthread_allocate_self(void **stack, void **tls);
void __pthread_deallocate_self(void **stack, size_t *size);
bool android_init_anonymous_namespace(const char* shared_libs_sonames,
                                      const char* library_search_path);
struct android_namespace_t* android_create_namespace(const char *name,
                                                     const char *ld_library_path,
                                                     const char *default_library_path,
                                                     uint64_t type,
                                                     const char *permitted_when_isolated_path,
                                                     struct android_namespace_t *parent_ns);
bool android_link_namespaces(android_namespace_t* from,
                             android_namespace_t* to,
                             const char* shared_libs_sonames);
}

extern "C" {

void nb_qemu_initialize() {
    ALOGV("initialize");
}

void *nb_qemu_loadLibrary(const char *filename, void *ns) {
    ALOGV("loadLibrary: %s, ns=%p", filename, ns);
    android_dlextinfo info = { .flags = ANDROID_DLEXT_USE_NAMESPACE, .library_namespace = (struct android_namespace_t *) ns };
    void *ret = android_dlopen_ext(filename, RTLD_LAZY, &info);
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

void nb_qemu_printCallStack() {
    android::CallStack(LOG_TAG);
}

bool nb_qemu_initAnonymousNamespace(const char *public_ns_sonames, const char *anon_ns_library_path) {
    ALOGV("initAnonymousNamespace: sonames=%s, library_path=%s", public_ns_sonames, anon_ns_library_path);
    return android_init_anonymous_namespace(public_ns_sonames, anon_ns_library_path);
}

struct android_namespace_t *nb_qemu_createNamespace(const char *name,
                                                    const char *ld_library_path,
                                                    const char *default_library_path,
                                                    uint64_t type,
                                                    const char *permitted_when_isolated_path,
                                                    android_namespace_t *parent_ns) {
    ALOGV("createNamespace:\n  name=%s\n  ld_library_path=%s\n  default_library_path=%s\n  type=%llu\n  perm_isolated=%s\n  parent=%p",
          name, ld_library_path, default_library_path, type, permitted_when_isolated_path, parent_ns);
    return android_create_namespace(name, ld_library_path, default_library_path, type, permitted_when_isolated_path, parent_ns);
}

bool nb_qemu_linkNamespaces(android_namespace_t *from, android_namespace_t *to, const char *shared_libs_sonames) {
    ALOGV("linkNamespaces: from=%p, to=%p, libs=%s", from, to, shared_libs_sonames);
    return android_link_namespaces(from, to, shared_libs_sonames);
}

};
