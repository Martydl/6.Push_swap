/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbcounter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:20:17 by lramard           #+#    #+#             */
/*   Updated: 2018/11/20 16:04:06 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numbcounter(int n)
{
	int nb;
	int count;

	nb = n;
	count = 0;
	while (nb / 10)
	{
		nb = nb / 10;
		count++;
	}
	count++;
	return (count);
}
