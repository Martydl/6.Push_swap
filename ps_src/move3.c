/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:51:28 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/01 14:35:06 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rra(t_nbr **a)
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
}

void	ft_rrb(t_nbr **b)
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
}

void	ft_rrr(t_nbr **a, t_nbr **b)
{
	ft_rra(a);
	ft_rrb(b);
}
