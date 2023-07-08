#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return 1;

    return 0;
}


// int main(void)
// {
//     char c;
    
//     // c = 'c';
//     // printf("%c == %d", c, ft_isprint(c));
//     // c = '\n';
//     // printf("%c == %d", c, ft_isprint(c));
//     for (int c = 1; c <=127; c++) 
//         if (isprint(c) != 0)
//             printf("%c", c);
//     return 0;
// }

