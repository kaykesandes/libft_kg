/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:02:17 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/23 15:18:11 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_strlen(char *dest, char *src)
{
  int x = 0;
  while (src[x] != '\0')
  {
    x++;
    dest[x] = src[x];
  }
  dest[x] = '\0';
  return (dest[]);
}

int main(void)
{
  char *array = "";
  char *arrar_src = "teste";

  printf("%s", ft_strlen(array, arrar_src));
}
