// #include <stdio.h>
#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return (char *)str;
        str++;
    }
    if (*str == c)
        return (char *) str;

    return NULL;
}


// int main(void)
// {
//     const char *str = "Ola mundo";
//     char chart = 'm';

//     char *result = ft_strchr(str, chart);

//     if (result != NULL)
//         printf("Encontrado %ld \n", result - str);
//     else
//         printf("N encontrado\n");
// }