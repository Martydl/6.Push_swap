/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:23:58 by lramard           #+#    #+#             */
/*   Updated: 2018/11/20 16:07:59 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new_lst;
	t_list	*save_lst;

	tmp = f(lst);
	if (lst == 0 || f == 0)
		return (NULL);
	if ((new_lst = ft_lstnew(tmp->content, tmp->content_size)) == 0)
		return (0);
	save_lst = new_lst;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = f(lst);
		if ((new_lst->next = ft_lstnew(tmp->content, tmp->content_size)) == 0)
			return (0);
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (save_lst);
}
