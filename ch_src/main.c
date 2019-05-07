/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:29:12 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 18:18:22 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	if (!ft_do_it(&a, move))
		ft_putendl("KO");
	else
		ft_putendl("OK");
	ft_free_list(a);
	ft_free_move(move);
	return (0);
}
