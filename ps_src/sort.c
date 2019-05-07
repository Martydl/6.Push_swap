/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:38:04 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 17:34:39 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

int		ft_push_a(t_nbr **a, t_nbr **b, int size, int med)
{
	int		pushed;
	int		i;

	pushed = 0;
	i = 0;
	while (i < size)
	{
		if ((*b)->nb >= med)
		{
			ft_pa(a, b);
			pushed++;
		}
		else
			ft_rb(b, 1);
		i++;
	}
	if (ft_lstsize(*b) != size - pushed)
		while (size - pushed > 0)
		{
			ft_rrb(b, 1);
			size--;
		}
	return (pushed);
}

int		ft_push_b(t_nbr **a, t_nbr **b, int size, int med)
{
	int		pushed;
	int		i;

	pushed = 0;
	i = 0;
	while (i < size)
	{
		if ((*a)->nb < med)
		{
			ft_pb(a, b);
			pushed++;
		}
		else
			ft_ra(a, 1);
		i++;
	}
	if (ft_lstsize(*a) != size - pushed)
		while (size - pushed > 0)
		{
			ft_rra(a, 1);
			size--;
		}
	return (pushed);
}

void	ft_bringback(t_nbr **a, t_nbr **b, int size)
{
	while (size > 0)
	{
		ft_pa(a, b);
		size--;
	}
}

void	ft_sort_a(t_nbr **a, t_nbr **b, int size)
{
	if (size == 3)
		ft_three_a(a, b);
	else if (size == 2)
		ft_two_a(a);
}

void	ft_sort_b(t_nbr **a, t_nbr **b, int size)
{
	if (size == 3)
		ft_three_b(a, b);
	else if (size == 2)
		ft_two_b(b);
}
