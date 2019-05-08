/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:43:37 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 17:18:02 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_quicksort_a(t_nbr **a, t_nbr **b, int size)
{
	int		med;
	int		pushed;

	med = ft_getmed(*a, size);
	pushed = ft_push_b(a, b, size, med);
	if (pushed < 3)
	{
		ft_sort_a(a, b, size - pushed);
		ft_sort_b(a, b, pushed);
		ft_bringback(a, b, pushed);
	}
	else
	{
		ft_quicksort_a(a, b, size - pushed);
		ft_quicksort_b(a, b, pushed);
	}
}

void	ft_quicksort_b(t_nbr **a, t_nbr **b, int size)
{
	int		med;
	int		pushed;

	med = ft_getmed(*b, size);
	pushed = ft_push_a(a, b, size, med);
	if (pushed < 3)
	{
		ft_sort_a(a, b, pushed);
		ft_sort_b(a, b, size - pushed);
		ft_bringback(a, b, size - pushed);
	}
	else
	{
		ft_quicksort_a(a, b, pushed);
		ft_quicksort_b(a, b, size - pushed);
	}
}

void	ft_resolve(t_nbr **a)
{
	t_nbr	*b;
	int		size;

	b = NULL;
	size = ft_lstsize(*a);
	if (size <= 3)
		ft_short_a(a, size);
	else if (size <= 6)
		ft_short(a, &b, size);
	else
		ft_quicksort_a(a, &b, size);
}
