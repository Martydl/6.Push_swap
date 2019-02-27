/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:53:47 by lramard           #+#    #+#             */
/*   Updated: 2018/11/20 16:10:47 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_rec(int n)
{
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr_rec(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

void			ft_putnbr(int n)
{
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n >= 0)
		ft_putnbr_rec(n);
	if (n == -2147483648)
	{
		ft_putchar('-');
		n = 214748364;
		ft_putnbr_rec(n);
		ft_putchar('8');
	}
}
