#include "libft.h"
// #include <stdio.h>

int ft_strncmp(const char* s1, const char* s2, size_t n)
{
    while (n > 0)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        else if (*s1 == '\0')
            return 0;

        s1++;
        s2++;
        n--;
    }
    return 0;
}

// int main(void)
// {
//     const char* str1 = "Teste Mundo";
//     const char* str2 = "Teste Terra";    
//     size_t n = 5;

//     int result = ft_strncmp(str1, str2, n);

//     if (result < 0)
//         printf("%s\n %s\n %zu \n", str1, str2, n);
//     else if (result > 0)
//         printf("%s\n %s\n %zu", str1, str2, n);
//     else
//         printf("%s\n %s\n %zu", str1, str2, n);        
// }