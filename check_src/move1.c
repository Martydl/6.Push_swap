/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:22:38 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/01 13:52:20 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_nbr **a)
{
	t_nbr	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
}

void	ft_sb(t_nbr **b)
{
	t_nbr	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
}

void	ft_ss(t_nbr **a, t_nbr **b)
{
	ft_sa(a);
	ft_sb(b);
}

void	ft_pa(t_nbr **a, t_nbr **b)
{
	t_nbr	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
}

void	ft_pb(t_nbr **a, t_nbr **b)
{
	t_nbr	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
}
