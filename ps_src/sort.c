/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:38:04 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 12:11:47 by mde-laga         ###   ########.fr       */
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
	while (size - pushed > 0)
	{
		ft_rra(a, 1);
		size--;
	}
	return (pushed);
}

void	ft_bringback_a(t_nbr **a, t_nbr **b, int size)
{
	while (size > 0)
	{
		ft_pa(a, b);
		size--;
	}
}

void	ft_bringback_b(t_nbr **a, t_nbr **b, int size)
{
	while (size > 0)
	{
		ft_pb(a, b);
		size--;
	}
}

void	ft_quicksort_a(t_nbr **a, t_nbr **b, int size)
{
	int		med;
	int		pushed;

	med = ft_getmed(*a, size);
	pushed = ft_push_b(a, b, size, med);
	if (pushed < 3)
	{
		ft_sort_b(a, b, pushed);
		ft_sort_a(a, b, size - pushed);
	}
	else
	{
		ft_quicksort_b(a, b, pushed);
		ft_quicksort_a(a, b, size - pushed);
	}
	ft_bringback_a(a, b, pushed);
}

void	ft_quicksort_b(t_nbr **a, t_nbr **b, int size)
{
	int		med;
	int		pushed;

	med = ft_getmed(*b, size);
	pushed = ft_push_a(a, b, size, med);
	if (pushed <= 3)
	{
		ft_sort_a(a, b, pushed);
		ft_sort_b(a, b, size - pushed);
	}
	else
	{
		ft_quicksort_a(a, b, pushed);
		ft_quicksort_b(a, b, size - pushed);
	}
	ft_bringback_b(a, b, pushed);
}
