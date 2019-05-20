/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:34:33 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/20 10:41:27 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_nbr *lst)
{
	if (lst)
		ft_free_list(lst);
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

int		main(int ac, char **av)
{
	t_nbr	*a;

	if (ac == 1)
		return (0);
	a = ft_create_list(av);
	if (!ft_lst_is_sort(a))
		ft_resolve(&a);
	ft_free_list(a);
	return (0);
}
