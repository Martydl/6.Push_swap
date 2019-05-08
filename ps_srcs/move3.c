/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:51:28 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 16:19:58 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_nbr **a, int print)
{
	t_nbr	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	while ((*a)->next->next)
		*a = (*a)->next;
	(*a)->next->next = tmp;
	tmp = (*a)->next;
	(*a)->next = NULL;
	*a = tmp;
	if (print == 1)
		ft_putendl("rra");
}

void	ft_rrb(t_nbr **b, int print)
{
	t_nbr	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	while ((*b)->next->next)
		*b = (*b)->next;
	(*b)->next->next = tmp;
	tmp = (*b)->next;
	(*b)->next = NULL;
	*b = tmp;
	if (print == 1)
		ft_putendl("rrb");
}

void	ft_rrr(t_nbr **a, t_nbr **b)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	ft_putendl("rrr");
}
