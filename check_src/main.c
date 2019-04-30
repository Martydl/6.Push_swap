/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:29:12 by mde-laga          #+#    #+#             */
/*   Updated: 2019/04/30 18:33:39 by mde-laga         ###   ########.fr       */
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
	char	**move;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	a = ft_create_list(av);
	move = ft_get_instruct();
	if (!ft_check_instruct(move))
		ft_error(a, move);
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
//	ft_display_list(b);

	int i = -1;
	while (move[++i])
		ft_putendl(move[i]);

	ft_free_list(a);
//	ft_free_list(b);
	ft_free_move(move);
	(void)av;
	return (0);
}
