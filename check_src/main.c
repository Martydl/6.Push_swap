/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:29:12 by mde-laga          #+#    #+#             */
/*   Updated: 2019/02/28 13:58:13 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_list(t_nbr *lst)
{
	while (lst)
	{
		ft_putnbr(lst->nb);
		ft_putchar(' ');
		lst = lst->next;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	t_nbr	*a;
	t_nbr	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	a = ft_create_list(av);
//	ft_sa(&a);
//	ft_sb(&b);
//	ft_ss(&a, &b);
//	ft_pa(&a, &b);
//	ft_pb(&a, &b);
//	ft_ra(&a);
//	ft_rb(&b);
//	ft_rr(&a, &b);
//	ft_rra(&a);
//	ft_rrb(&b);
//	ft_rrr(&a, &b);
	ft_display_list(a);
	ft_display_list(b);
	ft_free_list(a);
	ft_free_list(b);
	return (0);
}