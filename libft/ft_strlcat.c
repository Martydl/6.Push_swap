/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:59:31 by lramard           #+#    #+#             */
/*   Updated: 2018/11/19 15:54:44 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		index;
	size_t		index2;
	char		*src2;

	src2 = (char *)src;
	index = ft_strlen(dest);
	index2 = 0;
	while (((index2 + index + 1) < n) && (index2 != ft_strlen(src2)))
	{
		dest[index + index2] = src[index2];
		index2++;
	}
	dest[index + index2] = '\0';
	if (index > n)
		return (n + ft_strlen(src2));
	return (index + ft_strlen(src2));
}
