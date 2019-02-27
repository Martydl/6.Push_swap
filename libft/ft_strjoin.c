/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:26:34 by lramard           #+#    #+#             */
/*   Updated: 2019/02/18 14:02:02 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	uint32_t	i;
	char		*str;

	if (s1 && s2)
	{
		i = 0;
		if (!(str = (char*)malloc(sizeof(char) *
						(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1))))
			return (NULL);
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i])
		{
			str[ft_strlen((char *)s1) + i] = s2[i];
			i++;
		}
		str[ft_strlen((char *)s1) + i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
