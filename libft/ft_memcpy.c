/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:37:33 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/04 03:55:43 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src)
		return (dest);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
int main(void) 
{
    char src[20] = "Hello, world!";  // Chaîne source
    char dest[20];                   // Tableau destination

    // Affiche les valeurs avant l'utilisation de ft_memcpy
    printf("Avant memcpy :\n");
    printf("src  = %s\n", src);
    printf("dest = %s\n", dest);

    // Utiliser ft_memcpy pour copier src dans dest (y compris le caractère nul)
    ft_memcpy(dest, src, 12);  // Copier les 14 premiers octets, y compris '\0'

    // Affiche les valeurs après l'utilisation de ft_memcpy
    printf("Après ft_memcpy :\n");
    printf("src  = %s\n", src);
    printf("dest = %s\n", dest);

    return 0;
}*/
