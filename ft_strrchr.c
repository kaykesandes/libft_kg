#include "libft.h"
// #include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    const char *retu = NULL;

    while (*s != '\0')
    {
        if (*s == c)
            retu = s;
        s++;        
    }
    if (*s == c)
        return (char *)s;
    return (char *)retu;
}

// int main(void)
// {
//     const char *str = "Ola mundo";
//     char chart = 'm';
//     char *result = ft_strrchr(str, chart);
//     if (result != NULL)
//         printf("Encontrado %ld \n", result - str);
//     else
//         printf("N encontrado\n");
// }