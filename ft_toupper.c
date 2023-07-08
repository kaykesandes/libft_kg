#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c <= 65  && c >= 90)
        return 1;

    return 0;
}


int main(void)
{
    char c, result;
    c = 'M';

    result = tolower(c);
    printf("Test1(%c) = %c\n", c, result);

    c = 'm';
    result = tolower(c);
    printf("Test1(%c) = %c\n", c, result);

    c = '+';
    result = tolower(c);
    printf("Test1(%c) = %c\n", c, result);
}