#include "libft.h"
// #include <stdio.h>

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

// int main (void)
// {
//     char src[] = "Source string";
//     char dest[20];
//     char *result = ft_memccpy(dest, src, 'g', sizeof(src));
//     if (result != NULL) {
//         printf("string: %s\n", dest);
//         printf("Stop character found: %c\n", *(result - 1));
//     } else {
//         printf("Stop character not found\n");
//     }

// }