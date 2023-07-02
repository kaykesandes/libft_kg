#include "libft.h"
// #include <stdio.h>
void ft_bzero(void* buffer, size_t len)
{
    unsigned char* a = buffer;
    while(len--)
    {
        *a++ = 0;
    }
}
// int main(void)
// {
//     char buff[20] = "Ola Mundo";
//     printf("%s\n", buff);
//     ft_bzero(buff, sizeof(buff));
//     printf("%s\n", buff);
// }