/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:57:12 by mde-laga          #+#    #+#             */
/*   Updated: 2019/04/30 18:41:39 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_duplicate(t_nbr *beg)
{
	t_nbr	*lst;
	t_nbr	*tmp;

	lst = beg;
	while (lst->next)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (lst->nb == tmp->nb)
				ft_error(beg, NULL);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
}

void	ft_check_nb(char *av, t_nbr *beg)
{
	if (!ft_str_is_numeric(av[0] == '-' || av[0] == '+' ? av + 1 : av))
		ft_error(beg, NULL);
	if (ft_atoi(av) != ft_atol(av))
		ft_error(beg, NULL);
}

int		ft_isinstruct(char *mv)
{
	char **list;

	if (!(list = (char**)malloc(sizeof(char*) * 12)))
		return (0);
	list[11] = NULL;
	list[0] = "sa";
	if (!ft_strcmp(mv, list[0]))
		return (1);
	return (0);
}

int	ft_check_instruct(char **move)
{
	ft_isinstruct(move[0]);
	return (0);
}
