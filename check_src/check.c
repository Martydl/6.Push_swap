/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:57:12 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/01 14:10:31 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	char	*list[11];
	int		i;

	list[0] = "sa";
	list[1] = "sb";
	list[2] = "ss";
	list[3] = "pa";
	list[4] = "pb";
	list[5] = "ra";
	list[6] = "rb";
	list[7] = "rr";
	list[8] = "rra";
	list[9] = "rrb";
	list[10] = "rrr";
	i = 0;
	while (i <= 10)
		if (!ft_strcmp(mv, list[i++]))
			return (1);
	return (0);
}

int		ft_check_instruct(char **move)
{
	while (*move)
		if (ft_isinstruct(*move++) == 0)
			return (0);
	return (1);
}
