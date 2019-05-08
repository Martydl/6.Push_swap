/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 11:47:52 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 16:25:44 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_nbr *lst)
{
	if (lst)
		ft_free_list(lst);
	ft_putstr("Error\n");
	exit(0);
}

int		ft_lstsize(t_nbr *lst)
{
	int i;

	if (!lst)
		return (0);
	i = 1;
	while (lst->next && i++)
		lst = lst->next;
	return (i);
}

t_nbr	*ft_duplst(t_nbr *lst, int size)
{
	t_nbr	*dup;

	if (lst && size > 0)
	{
		size--;
		if (!(dup = (t_nbr*)malloc(sizeof(t_nbr))))
			return (NULL);
		dup->nb = lst->nb;
		dup->next = ft_duplst(lst->next, size);
		return (dup);
	}
	else
		return (NULL);
}

t_nbr	*ft_sortlst(t_nbr *lst)
{
	t_nbr	*tmp;
	int		swap;

	tmp = lst;
	while (lst->next)
	{
		if (lst->nb > lst->next->nb)
		{
			swap = lst->nb;
			lst->nb = lst->next->nb;
			lst->next->nb = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return (tmp);
}

int		ft_getmed(t_nbr *lst, int size)
{
	int		med;
	t_nbr	*dup;
	t_nbr	*tmp;

	dup = ft_duplst(lst, size);
	dup = ft_sortlst(dup);
	tmp = dup;
	med = 0;
	while (dup)
	{
		med++;
		dup = dup->next;
	}
	med /= 2;
	dup = tmp;
	while (med-- > 0)
		dup = dup->next;
	med = dup->nb;
	ft_free_list(tmp);
	return (med);
}
