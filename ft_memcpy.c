#include "libft.h"
// #include <string.h>
// #include <stdio.h>

void*   ft_memcpy(void  *dest, const void *source, size_t n)
{
    while(n--)
    {
        *((char *)dest++) = *((char *)source++);
    }
    return dest;
}

// int main(void)
// {
//     int dest = 0;
//     int source = 10;
//     ft_memcpy(&dest, &source, sizeof(int));
//     printf("Source: %d\n", source);
//     printf("dest: %d\n", dest);

//     char string_dest[255];
//     char *string_source = "Ola Mundo";
//     ft_memcpy(string_dest, string_source, strlen(string_source));
//     printf("Source:%s\n", string_source);
//     printf("dest:%s\n", string_dest);
// }