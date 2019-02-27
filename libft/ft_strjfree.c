/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:38:18 by lramard           #+#    #+#             */
/*   Updated: 2019/02/09 16:18:16 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjfree(char *s1, char *s2)
{
	char	*str;

	if (s1 == NULL)
	{
		if ((str = ft_strdup(s2)) == 0)
			return (0);
		return (str);
	}
	else
	{
		if ((str = ft_strjoin(s1, s2)) == 0)
			return (0);
		ft_free(s1, s2);
		return (str);
	}
}
