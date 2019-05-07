/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 17:16:22 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 17:18:55 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_two_a(t_nbr **a)
{
	if ((*a)->nb > (*a)->next->nb)
		ft_sa(a, 1);
}

void	ft_two_b(t_nbr **b)
{
	if ((*b)->nb < (*b)->next->nb)
		ft_sb(b, 1);
}

void	ft_mini_three_a(t_nbr **a)
{
	if ((*a)->nb < (*a)->next->nb && (*a)->next->nb < (*a)->next->next->nb)
		return ;
	else if ((*a)->nb < (*a)->next->next->nb
		&& (*a)->next->next->nb < (*a)->next->nb)
	{
		ft_rra(a, 1);
		ft_sa(a, 1);
	}
	else if ((*a)->next->nb < (*a)->nb && (*a)->nb < (*a)->next->next->nb)
		ft_sa(a, 1);
	else if ((*a)->next->next->nb < (*a)->nb && (*a)->nb < (*a)->next->nb)
		ft_rra(a, 1);
	else if ((*a)->next->nb < (*a)->next->next->nb
		&& (*a)->next->next->nb < (*a)->nb)
		ft_ra(a, 1);
	else if ((*a)->next->next->nb < (*a)->next->nb && (*a)->next->nb < (*a)->nb)
	{
		ft_ra(a, 1);
		ft_sa(a, 1);
	}
}

void	ft_mini_three_b(t_nbr **b)
{
	if ((*b)->nb < (*b)->next->nb && (*b)->next->nb < (*b)->next->next->nb)
	{
		ft_rb(b, 1);
		ft_sb(b, 1);
	}
	else if ((*b)->nb < (*b)->next->next->nb
		&& (*b)->next->next->nb < (*b)->next->nb)
		ft_rb(b, 1);
	else if ((*b)->next->nb < (*b)->nb && (*b)->nb < (*b)->next->next->nb)
		ft_rrb(b, 1);
	else if ((*b)->next->next->nb < (*b)->nb && (*b)->nb < (*b)->next->nb)
		ft_sb(b, 1);
	else if ((*b)->next->nb < (*b)->next->next->nb
		&& (*b)->next->next->nb < (*b)->nb)
	{
		ft_rrb(b, 1);
		ft_sb(b, 1);
	}
	else if ((*b)->next->next->nb < (*b)->next->nb && (*b)->next->nb < (*b)->nb)
		return ;
}
