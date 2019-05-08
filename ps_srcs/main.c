/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:34:33 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 18:18:51 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
