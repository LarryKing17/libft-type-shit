/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:45:04 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/04 03:48:35 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*okur;
	size_t	i;
	char	nb;

	nb = (char )c;
	i = 0;
	okur = (char *)s;
	while (i < n)
	{
		if (okur[i] == nb)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (0);
}
