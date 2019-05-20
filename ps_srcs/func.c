/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 11:47:52 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/20 10:42:00 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_list(t_nbr *beg)
{
	if (beg)
	{
		if (beg->next)
			ft_free_list(beg->next);
		free(beg);
	}
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

t_med	*ft_getmed(t_nbr *lst, int size)
{
	t_nbr	*dup;
	t_nbr	*tmp;
	t_med	*med;

	if (!(med = (t_med*)malloc(sizeof(t_med))))
		return (NULL);
	dup = ft_duplst(lst, size);
	dup = ft_sortlst(dup);
	tmp = dup;
	med->median = size / 2;
	med->to_push = size - med->median;
	dup = tmp;
	while (med->median-- > 0)
		dup = dup->next;
	med->median = dup->nb;
	ft_free_list(tmp);
	return (med);
}
