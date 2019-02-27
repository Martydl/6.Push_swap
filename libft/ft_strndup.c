/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 20:30:48 by lramard           #+#    #+#             */
/*   Updated: 2019/02/12 19:00:48 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	i;

	if (n >= ft_strlen(s1))
		return (ft_strdup(s1));
	if (!(s2 = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = -1;
	while (s1[++i] && i < n)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
