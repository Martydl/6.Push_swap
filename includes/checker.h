/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:10:54 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/01 14:50:31 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/include/libft.h"
# include <stdlib.h>

# define BUFF_SIZE 16

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
void			ft_free_move(char **move);
void			ft_error(t_nbr *lst, char **move);
char			**ft_get_instruct(void);
int				ft_check_instruct(char **move);
int				ft_do_it(t_nbr **a, char **move);

#endif
