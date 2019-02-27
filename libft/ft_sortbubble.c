/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortbubble.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:59:43 by lramard           #+#    #+#             */
/*   Updated: 2019/02/18 14:01:45 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_sortbubble(char *tab)
{
	int				permut;
	uint64_t		i;
	char			*tmp;

	if (tab == NULL)
		return (NULL);
	i = 0;
	permut = 1;
	while (permut == 1)
	{
		permut = 0;
		while (i++ < (ft_strlen(tab) - 1))
			if ((ft_strcmp(&tab[i - 1], &tab[i])) > 0)
			{
				tmp = &tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = *tmp;
				permut = 1;
			}
		i = 1;
	}
	i = 0;
	return (tab);
}
