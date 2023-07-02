#include "libft.h"
// #include <stdio.h>
char *ft_strdup(const char *str)
{
    unsigned int i = 0;
    unsigned int leng = 0;

    while (str[leng] != '\0')
        leng++;
    
    char* ret = malloc(leng + 1);
    while (i <= leng)
    {
        ret[i] = str[i];
        i++;
    }
    return (ret);
}

// int main(void) {
//     const char *original = "Hello, World!";
//     char *duplicate = ft_strdup(original);

//     printf("String original:  %s\n", original);
//     printf("String duplicada: %s\n", duplicate);

//     free(duplicate); // Liberar a memória alocada pela strdup

//     return 0;
// }