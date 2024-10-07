/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:33:20 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/04 04:02:07 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (b);
}
/*
int main(void)
{
	char tableau[10];

	ft_memset(tableau, 42, sizeof(tableau));

	printf("Tableau rempli : %d %d %d %d %d %d %d %d %d %d\n", 
           tableau[0], tableau[1], tableau[2], tableau[3], tableau[4],
           tableau[5], tableau[6], tableau[7], tableau[8], tableau[9]);
	return (0);
}*/
