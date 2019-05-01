/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:29:12 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/01 14:10:31 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*void	ft_display_list(t_nbr *lst)
{
	while (lst)
	{
		ft_putnbr(lst->nb);
		ft_putchar(' ');
		lst = lst->next;
	}
	ft_putchar('\n');
}*/

int		main(int ac, char **av)
{
	t_nbr	*a;
	char	**move;

	if (ac == 1)
		return (0);
	a = ft_create_list(av);
	move = ft_get_instruct();
	if (!ft_check_instruct(move))
		ft_error(a, move);
	if (!ft_resolve(&a, move))
		ft_putendl("KO");
	else
		ft_putendl("OK");
	ft_free_list(a);
	ft_free_move(move);
	return (0);
}
