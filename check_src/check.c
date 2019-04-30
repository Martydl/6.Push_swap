/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:57:12 by mde-laga          #+#    #+#             */
/*   Updated: 2019/04/30 15:56:09 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_duplicate(t_nbr *beg)
{
	t_nbr	*lst;
	t_nbr	*tmp;

	lst = beg;
	while (lst->next)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (lst->nb == tmp->nb)
				ft_error(beg);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
}

void	ft_check_nb(char *av, t_nbr *beg)
{
	if (!ft_str_is_numeric(av[0] == '-' || av[0] == '+' ? av + 1 : av))
		ft_error(beg);
	if (ft_atoi(av) != ft_atol(av))
		ft_error(beg);
}

void	ft_check_instruct()
{
}
