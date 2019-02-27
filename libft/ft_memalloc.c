/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:00:02 by lramard           #+#    #+#             */
/*   Updated: 2018/11/28 08:21:44 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = NULL;
	if (size > 2147483647)
		return (NULL);
	if (!(mem = (void *)malloc(sizeof(void) * (size + 1))))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
