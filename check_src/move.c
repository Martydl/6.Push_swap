/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:22:38 by mde-laga          #+#    #+#             */
/*   Updated: 2019/03/01 09:57:45 by mde-laga         ###   ########.fr       */
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

void	ft_ra(t_nbr **a)
{
	t_nbr	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	while ((*a)->next)
		*a = (*a)->next;
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
}

void	ft_rb(t_nbr **b)
{
	t_nbr	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	while ((*b)->next)
		*b = (*b)->next;
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
}

void	ft_rr(t_nbr **a, t_nbr **b)
{
	ft_ra(a);
	ft_rb(b);
}

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
