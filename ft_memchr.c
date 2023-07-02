#include "libft.h"
// #include <stdint.h>
// #include <stdio.h>
void* ft_memchr(const void *ptr, int value, size_t num)
{
    const unsigned char *p = ptr;
    unsigned char val = (unsigned char)value;
    while(num--)
    {
        if(p[num] == val)
            return ((void* )&p[num]);
    }
    return NULL;
}

// int main(void)
// {
//     char test[] = "Ola mundo";

//     printf("%x", ft_memchr(test, ' ', sizeof(test)));
// }