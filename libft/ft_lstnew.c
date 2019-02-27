/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:50:16 by lramard           #+#    #+#             */
/*   Updated: 2018/11/20 16:08:18 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*n_e;

	if (!(n_e = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		n_e->next = NULL;
		n_e->content = NULL;
		n_e->content_size = 0;
		return (n_e);
	}
	if ((n_e->content = (char *)malloc(content_size)) == 0)
	{
		free(n_e);
		return (NULL);
	}
	n_e->next = NULL;
	ft_memcpy(n_e->content, content, content_size);
	n_e->content_size = content_size;
	return (n_e);
}
