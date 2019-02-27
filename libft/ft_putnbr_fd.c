/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:54:32 by lramard           #+#    #+#             */
/*   Updated: 2018/11/21 09:30:46 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_r(int n, int fd)
{
	if (n < 10)
		ft_putchar_fd((n + '0'), fd);
	else
	{
		ft_putnbr_r(n / 10, fd);
		ft_putchar_fd((n % 10 + '0'), fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n >= 0)
		ft_putnbr_r(n, fd);
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = 214748364;
		ft_putnbr_r(n, fd);
		ft_putchar_fd('8', fd);
	}
}
