#include "libft.h"
#include <stddef.h>
#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    unsigned int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len = ft_strlen(src);
    
    size_t i = 0;
    if (size > 0)
    {
        while ((src[i] != '\0') && (i < size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (len);
}


// int main(void)
// {
//     char src[] = {"REFERENCIA"};
//     char dst[11];

//     printf("%zu \n%s", ft_strlcpy(dst, src, sizeof(dst)), dst);
// }