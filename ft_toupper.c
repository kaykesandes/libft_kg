#include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97  && c <= 122)
        return (c - 32);

    return 0;
}


// int main(void)
// {
//     char c, result;
//     c = 'M';

//     result = toupper(c);
//     printf("Test1(%c) = %c\n", c, result);

//     c = 'm';
//     result = toupper(c);
//     printf("Test1(%c) = %c\n", c, result);

//     c = '+';
//     result = toupper(c);
//     printf("Test1(%c) = %c\n", c, result);
// }