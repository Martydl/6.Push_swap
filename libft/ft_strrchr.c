/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:21:19 by lramard           #+#    #+#             */
/*   Updated: 2018/11/21 16:21:43 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	int		k;
	char	*str;

	str = (char *)s;
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			k = i;
			k++;
		}
		i++;
	}
	if (str[i] == (char)c)
		return (str + i);
	if (k > 0)
		return (str + (k - 1));
	return (NULL);
}
