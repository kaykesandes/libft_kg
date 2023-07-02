#include "libft.h"
// #include <stdio.h>

void* ft_memmove(void* dest, const void* src, size_t len)
{
    unsigned char* d = dest;
    const unsigned char* s = src;
    if (d < s)
    {
        while(len--)
        {   
            *d++ = *s++;
        }
    }
    else 
    {
        unsigned char* last_d = d + len - 1;
        const unsigned char* last_s = s + len - 1;
        while (len--) 
        {
            *last_d-- = *last_s--;
        }
    }
    return (dest);
}

// int main()
// {
//     char str1[20] = "Hello, World!";
//     char str2[20];
//     printf("Before memmove: str1 = %s, str2 = %s\n", str1, str2);
//     // Move the contents of str1 to str2
//     ft_memmove(str2, str1, sizeof(str1));
//     printf("After memmove: str1 = %s, str2 = %s\n", str1, str2);
//     return 0;
// }
