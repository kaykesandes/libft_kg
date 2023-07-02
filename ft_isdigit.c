#include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

int ft_isdigit(int c)
{
    if (c <= 9 && c >= 0)
        return 1;

    return 0;
}

// int main(void)
// {
//     int ch = 8;

//     printf("%d",ft_isdigit(ch));
// }