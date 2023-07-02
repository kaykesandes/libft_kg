#include <stddef.h>

void*   ft_memccpy(void* dest, const void* src, int stop, size_t len)
{
    unsigned char* d = dest;
    const unsigned char* s = src;
    while (len--)
    {
        *d++ = *s;
        if (*s++ == stop)
            return d;
    }
    return NULL;
}