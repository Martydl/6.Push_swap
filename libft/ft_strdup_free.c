/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:08:37 by lramard           #+#    #+#             */
/*   Updated: 2018/11/28 08:38:43 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_free(const char *s)
{
	int		i;
	char	*tab;
	char	*str;

	str = (char *)s;
	i = 0;
	tab = NULL;
	if (!(tab = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	free(tab);
	return (tab);
}
