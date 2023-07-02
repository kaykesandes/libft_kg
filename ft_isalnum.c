#include "libft.h"
// #include <stdio.h>

int ft_isalnum(int c)
{
    if (c <= (9 + '0') && c >= (0 + '0'))
        return 1;

    return 0;
}

// int main(void)
// {
//     char ch = '0';

//     printf("%d", ft_isalnum(ch));

// }