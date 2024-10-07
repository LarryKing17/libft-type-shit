/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:31:53 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/07 17:40:56 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		j;
	int		res;

	i = -1;
	j = 0;
	res = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (res + 1));
	if (newstr == 0)
		return (NULL);
	while (s1[++i])
		newstr[i] = s1[i];
	while (s2[j])
		newstr[i++] = s2[j++];
	newstr[i] = '\0';
	return (newstr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Test avec deux chaînes normales
    char *str1 = "Hello";
    char *str2 = "World";
    char *result = ft_strjoin(str1, str2);
    printf("Test 1: '%s' + '%s' = '%s'\n", str1, str2, result);
    free(result);

    // Test avec une chaîne vide et une chaîne normale
    char *str3 = "";
    char *str4 = "World";
    result = ft_strjoin(str3, str4);
    printf("Test 2: '%s' + '%s' = '%s'\n", str3, str4, result);
    free(result);

    // Test avec une chaîne normale et une chaîne vide
    char *str5 = "Hello";
    char *str6 = "";
    result = ft_strjoin(str5, str6);
    printf("Test 3: '%s' + '%s' = '%s'\n", str5, str6, result);
    free(result);

    // Test avec deux chaînes vides
    char *str7 = "";
    char *str8 = "";
    result = ft_strjoin(str7, str8);
    printf("Test 4: '%s' + '%s' = '%s'\n", str7, str8, result);
    free(result);

    // Test avec deux chaînes plus longues
    char *str9 = "Longer string ";
    char *str10 = "with more content!";
    result = ft_strjoin(str9, str10);
    printf("Test 5: '%s' + '%s' = '%s'\n", str9, str10, result);
    free(result);

    return 0;
}*/
