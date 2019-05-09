/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:35:54 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/09 16:00:32 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lst_is_sort(t_nbr *a)
{
	if (a->next)
		if (a->nb > a->next->nb || !ft_lst_is_sort(a->next))
			return (0);
	return (1);
}

void	ft_free_list(t_nbr *beg)
{
	if (beg)
	{
		if (beg->next)
			ft_free_list(beg->next);
		free(beg);
	}
}

void	ft_check_nb(char *av, t_nbr *beg)
{
	if (!ft_str_is_numeric(av[0] == '-' || av[0] == '+' ? av + 1 : av))
		ft_error(beg);
	if (ft_atoi(av) != ft_atol(av))
		ft_error(beg);
}

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
				ft_error(beg);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
}

t_nbr	*ft_create_list(char **av)
{
	t_nbr	*beg;
	t_nbr	*tmp;
	t_nbr	*tmp2;

	ft_check_nb(*++av, NULL);
	if (!(tmp = (t_nbr*)malloc(sizeof(t_nbr))))
		return (NULL);
	tmp->nb = ft_atoi(*av);
	tmp->next = NULL;
	beg = tmp;
	while (*++av)
	{
		ft_check_nb(*av, beg);
		if (!(tmp2 = (t_nbr*)malloc(sizeof(t_nbr))))
			return (NULL);
		tmp2->nb = ft_atoi(*av);
		tmp2->next = NULL;
		tmp->next = tmp2;
		tmp = tmp2;
	}
	ft_check_duplicate(beg);
	return (beg);
}
