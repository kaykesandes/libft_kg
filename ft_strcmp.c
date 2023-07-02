#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    unsigned int n = 0;
    while (s1[n++])
    {
        if (s1[n] < s2[n])
            return -1;
        else if (s1[n] > s2[n])
            return 1;
    }
    return 0;
}

// int main(void)
// {
//     char str1[] = "Ola";
//     char str2[] = "Ola";

//     int result = ft_strcmp(str1, str2);
    
//     if (result == 0)
//         printf("%d %s %s \n", ft_strcmp(str1, str2), str1, str2);
//     else if(result < 0)
//         printf("%d %s %s \n", ft_strcmp(str1, str2), str1, str2);
//     else
//         printf("%d %s %s \n", ft_strcmp(str1, str2), str1, str2);

// }   