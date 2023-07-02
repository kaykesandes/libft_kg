#include "libft.h"
// #include <stdio.h>

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    const unsigned char *p1 = ptr1;
    const unsigned char *p2 = ptr2;

    while (num--) 
    {
        if(p1[num] > p2[num])
            return 1;
        else if (p1[num] < p2[num])
            return -1;
    }
    return 0;
}

// int main(void)
// {
//     unsigned char buffer1[] = {0x10, 0x20, 0x30, 0x40, 0x50};
//     unsigned char buffer2[] = {0x10, 0x20, 0x30, 0x40, 0x50};

//     int result = ft_memcmp(buffer1, buffer2, sizeof(buffer1));

//     printf("%d", result);
// }
