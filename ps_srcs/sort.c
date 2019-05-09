/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:38:04 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/09 11:47:44 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

int		ft_push_a(t_nbr **a, t_nbr **b, int size, t_med *med)
{
	int		pushed;
	int		back;
	int		i;

	pushed = 0;
	back = 0;
	i = -1;
	while (++i < size)
	{
		if ((*b)->nb >= med->median && ++pushed)
			ft_pa(a, b);
		else if ((*b)->nb < med->median && ++back)
			ft_rb(b, 1);
		if (pushed == med->to_push)
			break ;
	}
	if (back < ft_lstsize(*b) - back)
		while (back-- > 0)
			ft_rrb(b, 1);
	else if (back > ft_lstsize(*b) - back)
		while (ft_lstsize(*b) - back++ > 0)
			ft_rb(b, 1);
	free(med);
	return (pushed);
}

int		ft_push_b(t_nbr **a, t_nbr **b, int size, t_med *med)
{
	int		pushed;
	int		back;
	int		i;

	pushed = 0;
	back = 0;
	i = -1;
	while (++i < size)
	{
		if ((*a)->nb < med->median && ++pushed)
			ft_pb(a, b);
		else if ((*a)->nb >= med->median && ++back)
			ft_ra(a, 1);
		if ((size % 2 == 0 && pushed == med->to_push) || (size % 2 != 0
			&& pushed == med->to_push - 1))
			break ;
	}
	if (back < ft_lstsize(*a) - back)
		while (back-- > 0)
			ft_rra(a, 1);
	else if (back > ft_lstsize(*a) - back)
		while (ft_lstsize(*a) - back++ > 0)
			ft_ra(a, 1);
	free(med);
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
