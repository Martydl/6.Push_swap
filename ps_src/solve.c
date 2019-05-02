/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:43:37 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/02 17:56:35 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_five_sort(t_nbr **a, t_nbr **b)
{
	if ((*a)->nb > (*a)->next->nb)
		ft_sa(a, 1);
	if ((*a)->next->next->nb > (*a)->next->next->next->nb)
	{
		ft_ra(a, 1);
		ft_ra(a, 1);
		ft_sa(a, 1);
		ft_rra(a, 1);
		ft_rra(a, 1);
	}
	if ((*a)->nb > (*a)->next->next->nb)
	{
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pb(a, b);
		ft_ss(a, b);
		ft_pa(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
	}
	if ((*a)->next->next->next->next->nb > (*a)->next->next->nb)
	{
		ft_ra(a, 1);
		if ((*a)->next->next->next->nb > (*a)->next->next->nb)
		{
			if ((*a)->nb > (*a)->next->next->nb)
			{
				ft_pb(a, b);
				ft_ra(a, 1);
				ft_ra(a, 1);
				if ((*b)->nb > (*a)->nb)
				{
					ft_ra(a, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_putendl("1");
				}
				else
				{
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("2");
				}
			}
			else
			{
				if ((*a)->nb < (*a)->next->nb)
				{
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("3");
				}
				else
				{
					ft_pb(a, b);
					ft_ra(a, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("4");
				}
			}
		}
		else
		{
			if ((*a)->nb > (*a)->next->next->next->nb)
			{
				ft_pb(a, b);
				ft_ra(a, 1);
				ft_pb(a, b);
				ft_ra(a, 1);
				if ((*b)->next->nb > (*b)->nb)
				{
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_putendl("5");
				}
				else
				{
					ft_sb(b, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_putendl("6");
				}
			}
			else
			{
				if ((*a)->nb < (*a)->next->nb)
				{
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_sa(a, 1);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("7");
				}
				else
				{
					ft_sa(a, 1);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_sa(a, 1);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("8");
				}
			}
		}
	}
	else
	{
		if ((*a)->next->next->next->next->nb < (*a)->nb)
		{
			ft_ra(a, 1);
			if ((*a)->nb > (*a)->next->nb)
			{
				ft_sa(a, 1);
				ft_ra(a, 1);
				if ((*a)->nb > (*a)->next->nb)
				{
					ft_sa(a, 1);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("9");
				}
				else
				{
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("10");
				}
			}
			else
			{
				ft_ra(a, 1);
				ft_ra(a, 1);
				ft_ra(a, 1);
				ft_putendl("11");
			}
		}
		else
		{
			ft_ra(a, 1);
			if ((*a)->nb > (*a)->next->nb)
			{
				ft_pb(a, b);
				ft_sa(a, 1);
				ft_pb(a, b);
				ft_sa(a, 1);
				ft_ra(a, 1);
				ft_ra(a, 1);
				if ((*b)->next->nb > (*b)->nb)
				{
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_putendl("12");
				}
				else
				{
					ft_sb(b, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_putendl("13");
				}
			}
			else
			{
				if ((*a)->nb < (*a)->next->next->next->nb)
				{
					ft_ra(a, 1);
					ft_pb(a, b);
					ft_sa(a, 1);
					ft_ra(a, 1);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("14");
				}
				else
				{
					ft_pb(a, b);
					ft_pb(a, b);
					ft_sa(a, 1);
					ft_ra(a, 1);
					ft_pa(a, b);
					ft_pa(a, b);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_ra(a, 1);
					ft_putendl("15");
				}
			}
		}
	}
}

void	ft_three_sort(t_nbr **a, t_nbr **b)
{
	if ((*a)->nb < (*a)->next->nb && (*a)->next->nb < (*a)->next->next->nb)
		return ;
	else if ((*a)->nb < (*a)->next->next->nb && (*a)->next->next->nb < (*a)->next->nb)
	{
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
	}
	else if ((*a)->next->nb < (*a)->nb && (*a)->nb < (*a)->next->next->nb)
		ft_sa(a, 1);
	else if ((*a)->next->next->nb < (*a)->nb && (*a)->nb < (*a)->next->nb)
	{
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
		ft_sa(a, 1);
	}
	else if ((*a)->next->nb < (*a)->next->next->nb && (*a)->next->next->nb < (*a)->nb)
	{
		ft_sa(a, 1);
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
	}
	else if ((*a)->next->next->nb < (*a)->next->nb && (*a)->next->nb < (*a)->nb)
	{
		ft_sa(a, 1);
		ft_pb(a, b);
		ft_sa(a, 1);
		ft_pa(a, b);
		ft_sa(a, 1);
	}
}

void	ft_resolve(t_nbr *a)
{
	t_nbr	*b;

	b = NULL;
	//ft_putnbr(ft_getmed(a));
	ft_display_list(a);
	ft_three_sort(&a, &b);
	ft_display_list(a);
}
