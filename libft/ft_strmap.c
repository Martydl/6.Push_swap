/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:12:29 by lramard           #+#    #+#             */
/*   Updated: 2018/11/19 16:21:17 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*mem;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char *)s;
	if (!(mem = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	if (s)
		while (s[i])
		{
			mem[i] = f(str[i]);
			i++;
		}
	mem[i] = '\0';
	return (mem);
}
