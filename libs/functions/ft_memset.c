/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:14:39 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/18 21:24:45 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *p = (unsigned char *)ptr; // Conversão do ponteiro para o tipo apropriado

    while (num--)
    {
        *p = (unsigned char)value; // Atribuição do valor ao byte atual
        p++; // Avançar para o próximo byte
    }
    return ptr; // Retornar o ponteiro para o bloco de memória preenchido
}

// int main() 
// {
//     int array[5];
//     size_t num_elements = sizeof(array) / sizeof(int);
//     memset(array, 0, sizeof(array));
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     int ft_array[5];
//     size_t ft_num_elements = sizeof(ft_array) / sizeof(int);
//     ft_memset(ft_array, 0, sizeof(ft_array));
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("%d ", ft_array[i]);
//     }
//     printf("\n");
//     return 0;
// }