#include <iostream>
#include <dlfcn.h>

int main()
{
    void* handle = dlopen("./libib.so", RTLD_LAZY);
    if (handle == NULL) {
        printf("dlopen function error=[%s]\n", dlerror());
    } else {
        printf("handle=[%p]\n", handle);
    }
    return 0;
}
