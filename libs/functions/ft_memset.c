/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:14:39 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/17 18:32:53 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


void *ft_memset(void *ptr, int value, size_t num)
{
    while (num <= 0)
    {
        *ptr[num] = value;
        
    }
}

int main() 
{
    int array[5];
    size_t num_elements = sizeof(array) / sizeof(int);

    memset(array, 0, sizeof(array));

    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int ft_array[5];
    size_t ft_num_elements = sizeof(ft_array) / sizeof(int);

    ft_memset(ft_array, 0, sizeof(ft_array));

    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", ft_array[i]);
    }
    printf("\n");

    return 0;
}