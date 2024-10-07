/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:13:56 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/07 12:56:09 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*lafouine;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	total = count * size;
	lafouine = malloc(total);
	if (lafouine == NULL)
		return (NULL);
	else
		ft_bzero(lafouine, total);
	return (lafouine);
}
