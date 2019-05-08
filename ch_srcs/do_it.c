/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_it.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 11:09:30 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/01 14:50:22 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_lst_is_sort(t_nbr *a)
{
	if (a->next)
		if (a->nb > a->next->nb || !ft_lst_is_sort(a->next))
			return (0);
	return (1);
}

int		ft_do_it(t_nbr **a, char **move)
{
	t_nbr	*b;

	b = NULL;
	while (*move)
	{
		!ft_strcmp(*move, "sa") ? ft_sa(a) : 0;
		!ft_strcmp(*move, "sb") ? ft_sb(&b) : 0;
		!ft_strcmp(*move, "ss") ? ft_ss(a, &b) : 0;
		!ft_strcmp(*move, "pa") ? ft_pa(a, &b) : 0;
		!ft_strcmp(*move, "pb") ? ft_pb(a, &b) : 0;
		!ft_strcmp(*move, "ra") ? ft_ra(a) : 0;
		!ft_strcmp(*move, "rb") ? ft_rb(&b) : 0;
		!ft_strcmp(*move, "rr") ? ft_rr(a, &b) : 0;
		!ft_strcmp(*move, "rra") ? ft_rra(a) : 0;
		!ft_strcmp(*move, "rrb") ? ft_rrb(&b) : 0;
		!ft_strcmp(*move, "rrr") ? ft_rrr(a, &b) : 0;
		move++;
	}
	if (b || !ft_lst_is_sort(*a))
	{
		ft_free_list(b);
		return (0);
	}
	return (1);
}
