#include "libft.h"
// #include <stdio.h>

size_t  ft_strlen(const char *str)
{
    unsigned int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

// int main(void)
// {
//     char test[] = "012345";
//     printf("%d", ft_strlen(test));
// }
