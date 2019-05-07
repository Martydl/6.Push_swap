/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:22:38 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 11:48:37 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_nbr **a, int print)
{
	t_nbr	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	if (print == 1)
		ft_putendl("sa");
	//ft_display_list(*a);
}

void	ft_sb(t_nbr **b, int print)
{
	t_nbr	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (print == 1)
		ft_putendl("sb");
	//ft_display_list(*b);
}

void	ft_ss(t_nbr **a, t_nbr **b)
{
	ft_sa(a, 0);
	ft_sb(b, 0);
	ft_putendl("ss");
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
	ft_putendl("pa");
	//ft_display_list(*a);
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
	ft_putendl("pb");
	//ft_display_list(*b);
}
