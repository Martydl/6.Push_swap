/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:15:14 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/01 15:33:13 by mde-laga         ###   ########.fr       */
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
void			ft_sa(t_nbr **a);
void			ft_sb(t_nbr **b);
void			ft_ss(t_nbr **a, t_nbr **b);
void			ft_pa(t_nbr **a, t_nbr **b);
void			ft_pb(t_nbr **a, t_nbr **b);
void			ft_ra(t_nbr **a);
void			ft_rb(t_nbr **b);
void			ft_rr(t_nbr **a, t_nbr **b);
void			ft_rra(t_nbr **a);
void			ft_rrb(t_nbr **b);
void			ft_rrr(t_nbr **a, t_nbr **b);
void			ft_free_list(t_nbr *beg);
void			ft_error(t_nbr *lst);
int				ft_getmed(t_nbr *lst);
void			ft_resolve(t_nbr *a);

void	ft_display_list(t_nbr *lst);

#endif
