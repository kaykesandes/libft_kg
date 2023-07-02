#include "libft.h"
// #include <stddef.h>
// #include <string.h>
// #include <stdio.h>

char* ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t little_len = ft_strlen(little);

    if (little_len == 0)
        return (char *)big;

    while (*big && len >= little_len)
    {
        if (*big == *little && ft_strncmp(big, little, little_len) == 0)
            return (char *)big;
        big++;
        len--;
    }
    return NULL;
}

// int main(void)
// {
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;
    
//     ptr = ft_strnstr(largestring, smallstring, 4);
    
//     printf("%s", ptr);
//     return 0;
// }