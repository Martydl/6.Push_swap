/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:35:54 by mde-laga          #+#    #+#             */
/*   Updated: 2019/03/01 11:34:41 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_list(t_nbr *beg)
{
	if (beg)
	{
		if (beg->next)
			ft_free_list(beg->next);
		free(beg);
	}
}

void	ft_error(t_nbr *lst)
{
	ft_free_list(lst);
	ft_putstr("Error\n");
	exit(0);
}

t_nbr	*ft_create_list(char **av)
{
	t_nbr	*beg;
	t_nbr	*tmp;
	t_nbr	*tmp2;

	ft_check_nb(*++av, NULL);
	if (!(tmp = (t_nbr*)malloc(sizeof(t_nbr))))
		return (NULL);
	tmp->nb = ft_atoi(*av);
	tmp->next = NULL;
	beg = tmp;
	while (*++av)
	{
		ft_check_nb(*av, beg);
		if (!(tmp2 = (t_nbr*)malloc(sizeof(t_nbr))))
			return (NULL);
		tmp2->nb = ft_atoi(*av);
		tmp2->next = NULL;
		tmp->next = tmp2;
		tmp = tmp2;
	}
	ft_check_duplicate(beg);
	return (beg);
}

void	ft_get_instruct(char **move)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	while ((ret = read(1, buf, BUFF_SIZE)) > 0 && buf[0] != '\n')
	{
		if (ret == -1)
			return ;
		buf[ret] = '\0';
		*move = ft_strjfree(*move, ft_strdup(buf));
	}
}