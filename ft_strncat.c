#include "libft.h"
// #include <stdio.h>

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    unsigned int i = 0;
    unsigned int m = 0;

    while (dest[i] != '\0')
        i++;
    while (n--)
        dest[i++] = src[m++];
    return dest;
}

// int main(void)
// {
//     char dest[20] = "Hellow ";
//     const char *src = "World!";
//     size_t n = 3;

//     ft_strncat(dest, src, n);
//     printf("String concatenada: %s", dest);
// }