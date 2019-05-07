/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:38:11 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 17:31:24 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three_a_next(t_nbr **a, t_nbr **b)
{
	if ((*a)->next->next->nb < (*a)->nb && (*a)->nb < (*a)->next->nb)
	{
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
		ft_sa(a, 1);
	}
	else if ((*a)->next->nb < (*a)->next->next->nb
		&& (*a)->next->next->nb < (*a)->nb)
	{
		ft_sa(a, 1);
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
	}
	else if ((*a)->next->next->nb < (*a)->next->nb && (*a)->next->nb < (*a)->nb)
	{
		ft_sa(a, 1);
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
		ft_sa(a, 1);
	}
}

void	ft_three_a(t_nbr **a, t_nbr **b)
{
	if ((*a)->nb < (*a)->next->nb && (*a)->next->nb < (*a)->next->next->nb)
		return ;
	else if ((*a)->nb < (*a)->next->next->nb
		&& (*a)->next->next->nb < (*a)->next->nb)
	{
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
	}
	else if ((*a)->next->nb < (*a)->nb && (*a)->nb < (*a)->next->next->nb)
		ft_sa(a, 1);
	else
		ft_three_a_next(a, b);
}

void	ft_three_b_next(t_nbr **a, t_nbr **b)
{
	if ((*b)->next->nb < (*b)->nb && (*b)->nb < (*b)->next->next->nb)
	{
		ft_pa(a, b);
		ft_sb(b, 1);
		ft_pb(a, b);
		ft_sb(b, 1);
	}
	else if ((*b)->next->next->nb < (*b)->nb && (*b)->nb < (*b)->next->nb)
		ft_sb(b, 1);
	else if ((*b)->next->nb < (*b)->next->next->nb
		&& (*b)->next->next->nb < (*b)->nb)
	{
		ft_pa(a, b);
		ft_sb(b, 1);
		ft_pb(a, b);
	}
	else if ((*b)->next->next->nb < (*b)->next->nb && (*b)->next->nb < (*b)->nb)
		return ;
}

void	ft_three_b(t_nbr **a, t_nbr **b)
{
	if ((*b)->nb < (*b)->next->nb && (*b)->next->nb < (*b)->next->next->nb)
	{
		ft_sb(b, 1);
		ft_pa(a, b);
		ft_sb(b, 1);
		ft_pb(a, b);
		ft_sb(b, 1);
	}
	else if ((*b)->nb < (*b)->next->next->nb
		&& (*b)->next->next->nb < (*b)->next->nb)
	{
		ft_sb(b, 1);
		ft_pb(a, b);
		ft_sb(b, 1);
		ft_pb(a, b);
	}
	else
		ft_three_b_next(a, b);
}
