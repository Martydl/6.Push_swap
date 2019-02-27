/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:29:33 by lramard           #+#    #+#             */
/*   Updated: 2019/02/18 14:02:51 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	uint32_t	i;
	uint32_t	st;
	uint32_t	l;
	char		*mem;

	if (s == NULL)
		return (NULL);
	l = ft_strlen((char *)s);
	st = 0;
	while (s[st] == ' ' || s[st] == '\n' || s[st] == '\t')
		st++;
	i = 0;
	while (l > st && (s[l - 1] == ' ' || s[l - 1] == '\n' || s[l - 1] == '\t'))
	{
		i++;
		l--;
	}
	l += i;
	if (!(mem = (char *)malloc(sizeof(char) * ((l - (st + i)) + 1))))
		return (NULL);
	l = (l - (st + i));
	i = 0;
	ft_memcpy(mem, s + st, l);
	mem[l] = '\0';
	return (mem);
}
