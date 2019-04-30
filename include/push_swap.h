/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:27:23 by mde-laga          #+#    #+#             */
/*   Updated: 2019/03/01 10:24:36 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include <stdlib.h>

# define BUFF_SIZE 1

typedef struct	s_nbr
{
	int				nb;
	struct s_nbr	*next;
}				t_nbr;

t_nbr			*ft_create_list(char **av);
void			ft_check_duplicate(t_nbr *beg);
void			ft_check_nb(char *av, t_nbr *beg);
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
void			ft_get_instruct(char **move);

#endif
