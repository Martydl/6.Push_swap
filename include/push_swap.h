/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:15:14 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/07 17:25:04 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include <stdlib.h>

typedef struct	s_nbr
{
	int				nb;
	struct s_nbr	*next;
}				t_nbr;

t_nbr			*ft_create_list(char **av);
void			ft_sa(t_nbr **a, int print);
void			ft_sb(t_nbr **b, int print);
void			ft_ss(t_nbr **a, t_nbr **b);
void			ft_pa(t_nbr **a, t_nbr **b);
void			ft_pb(t_nbr **a, t_nbr **b);
void			ft_ra(t_nbr **a, int print);
void			ft_rb(t_nbr **b, int print);
void			ft_rr(t_nbr **a, t_nbr **b);
void			ft_rra(t_nbr **a, int print);
void			ft_rrb(t_nbr **b, int print);
void			ft_rrr(t_nbr **a, t_nbr **b);
void			ft_free_list(t_nbr *beg);
void			ft_error(t_nbr *lst);
int				ft_getmed(t_nbr *lst, int size);
void			ft_resolve(t_nbr **a);
int				ft_lstsize(t_nbr *lst);
void			ft_two_a(t_nbr **a);
void			ft_two_b(t_nbr **a);
void			ft_three_a(t_nbr **a, t_nbr **b);
void			ft_three_b(t_nbr **a, t_nbr **b);
void			ft_quicksort_a(t_nbr **a, t_nbr **b, int size);
void			ft_quicksort_b(t_nbr **a, t_nbr **b, int size);
int				ft_push_a(t_nbr **a, t_nbr **b, int size, int med);
int				ft_push_b(t_nbr **a, t_nbr **b, int size, int med);
void			ft_bringback(t_nbr **a, t_nbr **b, int size);
void			ft_sort_a(t_nbr **a, t_nbr **b, int size);
void			ft_sort_b(t_nbr **a, t_nbr **b, int size);
void			ft_mini_three_a(t_nbr **a);
void			ft_mini_three_b(t_nbr **b);
void			ft_short(t_nbr **a, t_nbr **b, int size);
void			ft_short_a(t_nbr **a, int size);

void			ft_display_list(t_nbr *lst);

#endif
