#include "libft.h"
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{   
    size_t i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n) 
        dest[i++] = '\0';
    return dest;
}
// int main() {
//     char dest[10]; // String de destino com tamanho suficiente para 10 caracteres
//     const char *src = "Hello, World!";

//     ft_strncpy(dest, src, sizeof(dest)-1); // Copia até 9 caracteres, deixando espaço para o caractere nulo final
//     dest[sizeof(dest)-1] = '\0'; // Garante que a string de destino seja nul-terminada

//     printf("String de destino: %s\n", dest);

//     return 0;
// }
