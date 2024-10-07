/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvalenti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:56:43 by zvalenti          #+#    #+#             */
/*   Updated: 2024/10/07 13:07:28 by zvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*newstr;

	len = ft_strlen(s1);
	newstr = (char *) malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1, len + 1);
	return (newstr);
}
