/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:35:54 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/27 17:14:52 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nbr	*ft_create_list(char **av)
{
	t_nbr	*beg;
	t_nbr	*tmp;

	if (!(beg = (t_nbr*)malloc(sizeof(t_nbr))))
		return (NULL);
	beg->nb = ft_atoi(++av);
	while (*av)
	{
		if (!(tmp))
	}
}