/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 17:17:45 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 17:18:01 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_short_a(t_nbr **a, int size)
{
	if (size == 3)
		ft_mini_three_a(a);
	else if (size == 2)
		ft_two_a(a);
}

void	ft_short_b(t_nbr **b, int size)
{
	if (size == 3)
		ft_mini_three_b(b);
	else if (size == 2)
		ft_two_b(b);
}

void	ft_short(t_nbr **a, t_nbr **b, int size)
{
	int		pushed;

	pushed = ft_push_b(a, b, size, ft_getmed(*a, size));
	ft_short_a(a, size - pushed);
	ft_short_b(b, pushed);
	ft_bringback(a, b, pushed);
}
