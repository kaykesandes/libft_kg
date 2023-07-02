#include "libft.h"

char *ft_strcat(char *dest, const char *src) 
{
    unsigned int i = 0;

    while (dest[i] != '\0')
        i++;
    while ((dest[i++] = *src++));
    return dest;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[20] = "Hello, ";
//     const char *src = "World!";

//     ft_strcat(dest, src);

//     printf("String concatenada: %s\n", dest);

//     return 0;
// }
