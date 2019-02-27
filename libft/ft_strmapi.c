/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:21:21 by lramard           #+#    #+#             */
/*   Updated: 2019/02/18 14:06:47 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mem;
	char			*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char *)s;
	if (!(mem = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	if (s)
		while (s[i])
		{
			mem[i] = f(i, str[i]);
			i++;
		}
	mem[i] = '\0';
	return (mem);
}
