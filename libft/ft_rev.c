/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 08:42:51 by lramard           #+#    #+#             */
/*   Updated: 2019/02/18 13:59:44 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rev(char *str)
{
	uint32_t	i;
	uint32_t	length;
	char		*str_copy;
	char		tmp;

	i = 0;
	length = (ft_strlen(str) - 1);
	str_copy = str;
	if (str == NULL)
		return (NULL);
	while (i < length)
	{
		tmp = str[i];
		str[i] = str_copy[length];
		str_copy[length] = tmp;
		i++;
		length--;
	}
	return (str);
}
