#include "libft.h"

char* ft_strstr(const char* haystack, const char* needle)
{
    size_t needle_len = ft_strlen(needle);
    size_t haystack_len = ft_strlen(haystack);
    size_t i = 0;

    if (needle_len == 0)
        return (char *)haystack;
    
    while (i <= haystack_len)
    {
        if (strncmp(&haystack[i], needle, needle_len) == 0)
            return (char *)&haystack[i];
        i++;
    }

    return NULL;
}

// int main(void)
// {
//     const char*  haystack = "Ola mundo!";
//     const char*  needle = "mundo";
//     char*   result = ft_strstr(haystack, needle);
//     if (result != NULL)
//         printf("%s\n%s\n%ld", needle, haystack, result - haystack);
//     else
//         printf("%s\n%s", needle, haystack);
// }