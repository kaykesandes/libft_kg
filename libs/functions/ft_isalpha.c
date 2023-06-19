/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:08:23 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/19 12:14:25 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char src)
{
    if (src > 'a' && src < 'z')
        return(2);
    else if (src > 'A' && src < 'Z')
        return(1);
    else
        return (0);
}

// #include <stdio.h>
// int main()
// {
    // char c;
    // c = 'Q';
    // printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));
    // c = 'q';
    // printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));
    // c='+';
    // printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));
    // return 0;
// }