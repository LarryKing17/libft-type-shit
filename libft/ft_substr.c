/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:10:11 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/07 14:53:40 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (!s[0] || (size_t)ft_strlen(s) < start)
		len = 0;
	else if ((size_t)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			newstr[j++] = s[i];
		i++;
	}
	newstr[j] = '\0';
	return (newstr);
}
