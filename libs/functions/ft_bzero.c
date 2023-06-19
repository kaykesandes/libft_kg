/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:30:49 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/18 21:24:30 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stddef.h>
// #include <stdio.h>

void ft_bzero(void *ptr, size_t num)
{
    unsigned char *p = (unsigned char *)ptr;
    
    while (num--)
    {
        *p = 0;
        p++;
    }
}

// int main() {
//     char str[10];
//     size_t num_elements = sizeof(str);
//     char ft_str[10];
//     size_t ft_num_elements = sizeof(ft_str);
//     bzero(str, num_elements);
//     ft_bzero(ft_str, ft_num_elements);
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("%d ", str[i]);
//     }
//     printf("\n");
//     for (size_t i = 0; i < ft_num_elements; i++) {
//         printf("%d ", str[i]);
//     }
//     printf("\n");
//     return 0;
// }