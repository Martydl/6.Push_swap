/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:43:37 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/03 14:06:21 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three_sort(t_nbr **a, t_nbr **b)
{
	if ((*a)->nb < (*a)->next->nb && (*a)->next->nb < (*a)->next->next->nb)
		return ;
	else if ((*a)->nb < (*a)->next->next->nb && (*a)->next->next->nb < (*a)->next->nb)
	{
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
	}
	else if ((*a)->next->nb < (*a)->nb && (*a)->nb < (*a)->next->next->nb)
		ft_sa(a, 1);
	else if ((*a)->next->next->nb < (*a)->nb && (*a)->nb < (*a)->next->nb)
	{
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
		ft_sa(a, 1);
	}
	else if ((*a)->next->nb < (*a)->next->next->nb && (*a)->next->next->nb < (*a)->nb)
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

void	ft_two_sort(t_nbr **a)
{
	if ((*a)->nb > (*a)->next->nb)
		ft_sa(a, 1);
}

void	ft_mini_three(t_nbr **a)
{
	if ((*a)->nb < (*a)->next->nb && (*a)->next->nb < (*a)->next->next->nb)
		return ;
	else if ((*a)->nb < (*a)->next->next->nb && (*a)->next->next->nb < (*a)->next->nb)
	{
		ft_rra(a, 1);
		ft_sa(a, 1);
	}
	else if ((*a)->next->nb < (*a)->nb && (*a)->nb < (*a)->next->next->nb)
		ft_sa(a, 1);
	else if ((*a)->next->next->nb < (*a)->nb && (*a)->nb < (*a)->next->nb)
		ft_rra(a, 1);
	else if ((*a)->next->nb < (*a)->next->next->nb && (*a)->next->next->nb < (*a)->nb)
		ft_ra(a, 1);
	else if ((*a)->next->next->nb < (*a)->next->nb && (*a)->next->nb < (*a)->nb)
	{
		ft_ra(a, 1);
		ft_sa(a, 1);
	}
}

void	ft_quicksort(t_nbr **a, t_nbr **b)
{

}

void	ft_resolve(t_nbr *a)
{
	t_nbr	*b;

	b = NULL;
	ft_display_list(a);
	//ft_three_sort(&a, &b);
	//ft_mini_three(&a);
	ft_display_list(a);
}
