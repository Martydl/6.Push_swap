/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:43:37 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/06 19:05:46 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		ft_two_b(a);
}

void	ft_resolve(t_nbr *a)
{
	t_nbr	*b;

	b = NULL;
	//ft_display_list(a);
	//ft_three_a(&a, &b);
	//ft_mini_three(&a);
	//ft_putnbr(ft_lstsize(a));
	//ft_putnbr(ft_getmed(a, ft_lstsize(a)));
	ft_quicksort_a(&a, &b, ft_lstsize(a));
	//ft_three_b(&a, &b);
	//ft_display_list(a);
}

// 7 8 9 4 3 6 5 1 2
