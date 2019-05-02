/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:32:35 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/01 16:13:22 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nbr	*ft_duplst(t_nbr *lst)
{
	t_nbr	*dup;

	if (lst)
	{
		if (!(dup = (t_nbr*)malloc(sizeof(t_nbr))))
			return (NULL);
		dup->nb = lst->nb;
		dup->next = ft_duplst(lst->next);
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

int		ft_getmed(t_nbr *lst)
{
	int		med;
	t_nbr	*dup;
	t_nbr	*tmp;

	dup = ft_duplst(lst);
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
