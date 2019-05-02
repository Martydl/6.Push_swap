/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:43:37 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/02 14:40:15 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_sort(t_nbr **a, t_nbr **b)
{
	if ((*a)->nb > (*a)->next->nb)
		ft_sa(a);
	if ((*a)->next->next->nb > (*a)->next->next->next->nb)
	{
		ft_ra(a);
		ft_ra(a);
		ft_sa(a);
		ft_rra(a);
		ft_rra(a);
	}
	if ((*a)->nb > (*a)->next->next->nb)
	{
		ft_pb(a, b);
		ft_sa(a);
		ft_pb(a, b);
		ft_ss(a, b);
		ft_pa(a, b);
		ft_sa(a);
		ft_pa(a, b);
	}
	if ((*a)->next->next->next->next->nb > (*a)->next->next->nb)
	{
		ft_ra(a);
		if ((*a)->next->next->next->nb > (*a)->next->next->nb)
		{
			if ((*a)->nb > (*a)->next->next->nb)
			{
				ft_pb(a, b);
				ft_ra(a);
				ft_ra(a);
				if ((*b)->nb > (*a)->nb)
				{
					ft_ra(a);
					ft_pa(a, b);
					ft_ra(a);
					ft_putendl("1");
				}
				else
				{
					ft_pa(a, b);
					ft_ra(a);
					ft_ra(a);
					ft_putendl("2");
				}
			}
			else
			{
				if ((*a)->nb < (*a)->next->nb)
				{
					ft_ra(a);
					ft_ra(a);
					ft_ra(a);
					ft_ra(a);
					ft_putendl("3");
				}
				else
				{
					ft_pb(a, b);
					ft_ra(a);
					ft_pa(a, b);
					ft_ra(a);
					ft_ra(a);
					ft_ra(a);
					ft_putendl("4");
				}
			}
		}
		else
		{
			if ((*a)->nb > (*a)->next->next->next->nb)
			{
				ft_pb(a, b);
				ft_ra(a);
				ft_pb(a, b);
				ft_ra(a);
				if ((*b)->next->nb > (*b)->nb)
				{
					ft_pa(a, b);
					ft_ra(a);
					ft_pa(a, b);
					ft_ra(a);
					ft_putendl("5");
				}
				else
				{
					ft_sb(b);
					ft_pa(a, b);
					ft_ra(a);
					ft_pa(a, b);
					ft_ra(a);
					ft_putendl("6");
				}
			}
			else
			{
				if ((*a)->nb < (*a)->next->nb)
				{
					ft_ra(a);
					ft_ra(a);
					ft_sa(a);
					ft_ra(a);
					ft_ra(a);
					ft_putendl("7");
				}
				else
				{
					ft_sa(a);
					ft_ra(a);
					ft_ra(a);
					ft_sa(a);
					ft_ra(a);
					ft_ra(a);
					ft_putendl("8");
				}
			}
		}
	}
	else
	{
		if ((*a)->next->next->next->next->nb < (*a)->nb)
		{
			ft_pb(a, b);
			ft_pb(a, b);
			ft_pb(a, b);
			ft_pb(a, b);
			ft_ra(a);
			if ((*b)->next->next->nb > (*b)->next->nb)
			{
				ft_pa(a, b);
				ft_pa(a, b);
				ft_pa(a, b);
				ft_sa(a);
				ft_pa(a, b);
				ft_ra(a);
				ft_ra(a);
				if ((*a)->nb > (*a)->next->nb)
				{
					ft_sa(a);
					ft_ra(a);
					ft_ra(a);
					ft_putendl("9");
				}
				else
				{
					ft_ra(a);
					ft_ra(a);
					ft_putendl("10");
				}
			}
			else
			{
				ft_pa(a, b);
				ft_pa(a, b);
				ft_pa(a, b);
				ft_pa(a, b);
				ft_ra(a);
				ft_ra(a);
				ft_ra(a);
				ft_ra(a);
				ft_putendl("11");
			}
		}
		else
		{
			ft_ra(a);
			if ((*a)->nb > (*a)->next->nb)
			{
				ft_pb(a, b);
				ft_sa(a);
				ft_pb(a, b);
				ft_sa(a);
				ft_ra(a);
				ft_ra(a);
				if ((*b)->next->nb > (*b)->nb)
				{
					ft_pa(a, b);
					ft_ra(a);
					ft_pa(a, b);
					ft_ra(a);
					ft_putendl("12");
				}
				else
				{
					ft_sb(b);
					ft_pa(a, b);
					ft_ra(a);
					ft_pa(a, b);
					ft_ra(a);
					ft_putendl("13");
				}
			}
			else
			{
				if ((*a)->nb < (*a)->next->next->next->nb)
				{
					ft_ra(a);
					ft_pb(a, b);
					ft_sa(a);
					ft_ra(a);
					ft_pa(a, b);
					ft_ra(a);
					ft_ra(a);
					ft_putendl("14");
				}
				else
				{
					ft_pb(a, b);
					ft_pb(a, b);
					ft_sa(a);
					ft_ra(a);
					ft_pa(a, b);
					ft_pa(a, b);
					ft_ra(a);
					ft_ra(a);
					ft_ra(a);
					ft_putendl("15");
				}
			}
		}
	}
}

void	ft_resolve(t_nbr *a)
{
	t_nbr	*b;

	b = NULL;
	//ft_putnbr(ft_getmed(a));
	ft_display_list(a);
	ft_small_sort(&a, &b);
	ft_display_list(a);
}
