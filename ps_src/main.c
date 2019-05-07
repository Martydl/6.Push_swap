/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:34:33 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 16:18:28 by mde-laga         ###   ########.fr       */
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

	if (ac == 1)
		return (0);
	a = ft_create_list(av);
	ft_resolve(&a);
	ft_free_list(a);
	return (0);
}
