#include "libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = ft_strlen(dest);
    size_t src_len = ft_strlen(src);
    size_t total_len = dest_len + src_len;

    if (total_len >= size)
        return total_len;

    size_t num_char_to_copy = size - dest_len - 1;
    ft_strncat(dest, src, num_char_to_copy);
    dest[size - 1] = '\0';

    return total_len;
}

// int main() {
//     char dest[20] = "Hello, ";
//     const char *src = "World!";
//     size_t size = sizeof(dest);
    
//     size_t result = ft_strlcat(dest, src, size);
//     printf("String concatenada: %s\n", dest);
//     printf("tamanho total: %zu \n", result);

//     return 0;
// }
