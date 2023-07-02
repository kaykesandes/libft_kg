#include <stddef.h>
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

/*
    A função bzero deve prencher com 0 na memoria
    buffer, e local que vai ser limpado na memoria
    len o tamanho da memoria
    ele percorre o com while(len--)
    aponta 0 para valor d a que e igual ao buffer
    assim ele incremeta mais 1
*/