/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:51:26 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 11:48:37 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_nbr **a, int print)
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
	if (print == 1)
		ft_putendl("ra");
	//ft_display_list(*a);
}

void	ft_rb(t_nbr **b, int print)
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
	if (print == 1)
		ft_putendl("rb");
	//ft_display_list(*b);
}

void	ft_rr(t_nbr **a, t_nbr **b)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	ft_putendl("rr");
}
