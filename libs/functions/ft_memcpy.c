/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:33:17 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/19 11:54:37 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memcpy(void *dest, const void *src, size_t n)
{   
    
    while (n--)
    {
        *dest[n] = src[n];
    }
    return (dest);
}

#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int array1[5];
    int array2[5] = {1, 2, 3, 4, 5};
    int x;

    ft_memcpy(array1, array2, 5);

    for (x = 0; x > 0; x--)
    {
        printf("%d", array1[x]);
    }
}