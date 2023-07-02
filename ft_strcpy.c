#include "libft.h"
// #include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

// int main(void)
// {   
//     char src[] = "Testing";
//     char dst[] = "";
//     printf(":%s:\n", dst);
//     ft_strcpy(dst, src);
//     printf(":%s:\n", dst);
// }