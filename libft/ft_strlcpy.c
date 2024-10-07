/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:36:30 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/04 04:12:30 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	j = 0;
	while (src[j] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
/*
int main() {
    char src[] = "Hello, world!";
    char dst[20];   // Destination avec assez de place
    char small_dst[5]; // Destination trop petite

    // Test 1 : Copier dans un buffer avec assez de place
    printf("Test 1: Buffer assez grand\n");
    size_t len = ft_strlcpy(dst, src, sizeof(dst));
    printf("src  = \"%s\"\n", src);
    printf("dst  = \"%s\"\n", dst);
    printf("Longueur de src = %zu\n\n", len);

    // Test 2 : Copier dans un buffer plus petit
    printf("Test 2: Buffer trop petit\n");
    len = ft_strlcpy(small_dst, src, sizeof(small_dst));
    printf("src  = \"%s\"\n", src);
    printf("small_dst  = \"%s\"\n", small_dst); // Devrait contenir "Hell"
    printf("Longueur de src = %zu\n\n", len);

    // Test 3 : Copier dans un buffer de taille 0
    printf("Test 3: Buffer de taille 0\n");
    len = ft_strlcpy(dst, src, 0);
    printf("src  = \"%s\"\n", src);
    printf("dst  = \"%s\" (ne devrait pas changer)\n", dst);
    printf("Longueur de src = %zu\n\n", len);

    // Test 4 : Copier une chaîne vide dans un buffer
    printf("Test 4: Copier une chaîne vide\n");
    char empty_src[] = "";
    len = ft_strlcpy(dst, empty_src, sizeof(dst));
    printf("src (vide)  = \"%s\"\n", empty_src);
    printf("dst  = \"%s\"\n", dst);
    printf("Longueur de src vide = %zu\n\n", len);

    // Test 5 : Copier dans un buffer avec une taille exacte
    printf("Test 5: Copier avec taille exacte\n");
    len = ft_strlcpy(dst, src, 6);  // Taille exacte pour "Hello"
    printf("src  = \"%s\"\n", src);
    printf("dst  = \"%s\" (doit contenir \"Hello\")\n", dst);
    printf("Longueur de src = %zu\n", len);

    return 0;
}

int main(void)
{
	size_t destsi;
	char	dest[] = "salurt";
	const char	*src;

	destsi = 20;
	src = "lesamislesgolmons";

	printf("%zu", ft_strlcpy(dest,src,destsi));
	printf("%s", dest);
	return (0);
}*/
