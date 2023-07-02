#include "libft.h"
// #include <stdio.h>

void*   ft_memset(void* buffer,int value, size_t len)
{
    unsigned char* a = buffer;
    while (len--) 
    {
        *a++ = value;
    }
    return buffer;
}

// int main(void)
// {
//     char buf[0xff];
//     ft_memset(buf, 0, 0xff);
//     ft_memset(buf, 'A', 20);
//     ft_memset(buf + 20, 'B', 20);
//     printf("%s\n", buf);
// }
