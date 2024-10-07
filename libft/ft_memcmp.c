/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:16:12 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/04 03:54:04 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}	
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, C Programming!";
    char str4[] = "HeLlo, World!";
    char str5[] = "";

    // Test 1: chaînes identiques
    if (ft_memcmp(str1, str2, 13) == 0)
        printf("Test 1: str1 == str2 : OK\n");
    else
        printf("Test 1: str1 == str2 : FAIL\n");

    // Test 2: chaînes différentes après un certain nombre de caractères
    if (ft_memcmp(str1, str3, 5) == 0)
        printf("Test 2: str1 == str3 sur 5 caractères : OK\n");
    else
        printf("Test 2: str1 == str3 sur 5 caractères : FAIL\n");

    // Test 3: chaînes totalement différentes
    if (ft_memcmp(str1, str3, 20) != 0)
        printf("Test 3: str1 != str3 sur 20 caractères : OK\n");
    else
        printf("Test 3: str1 != str3 sur 20 caractères : FAIL\n");

    // Test 4: chaînes avec des différences sensibles à la casse
    if (ft_memcmp(str1, str4, 13) != 0)
        printf("Test 4: str1 != str4 (différence majuscule/minuscule) : OK\n");
    else
        printf("Test 4: str1 != str4 (différence majuscule/minuscule) : FAIL\n");

    // Test 5: comparer une chaîne vide avec une autre
    if (ft_memcmp(str1, str5, 1) != 0)
        printf("Test 5: str1 != str5 (chaîne vide) : OK\n");
    else
        printf("Test 5: str1 != str5 (chaîne vide) : FAIL\n");

    // Test 6: comparer des chaînes identiques sur 0 octet (toujours égal)
    if (ft_memcmp(str1, str3, 0) == 0)
        printf("Test 6: str1 == str3 sur 0 caractère (n=0) : OK\n");
    else
        printf("Test 6: str1 == str3 sur 0 caractère (n=0) : FAIL\n");

    return 0;
}*/
