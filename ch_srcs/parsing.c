/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:35:54 by mde-laga          #+#    #+#             */
/*   Updated: 2019/05/09 15:59:22 by mde-laga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_error(t_nbr *lst, char **move)
{
	if (lst)
		ft_free_list(lst);
	if (move)
		ft_free_move(move);
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

void	ft_free_list(t_nbr *beg)
{
	if (beg)
	{
		if (beg->next)
			ft_free_list(beg->next);
		free(beg);
	}
}

void	ft_free_move(char **move)
{
	int i;

	i = -1;
	while (move[++i])
		ft_strdel(&move[i]);
	free(move);
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

char	**ft_get_instruct(void)
{
	char	**move;
	char	*str;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	move = NULL;
	str = ft_strnew(0);
	while ((ret = read(0, buf, BUFF_SIZE)) > 0)
	{
		if (ret == -1)
			return (NULL);
		buf[ret] = '\0';
		str = ft_strjfree(str, ft_strdup(buf));
	}
	move = ft_strsplit(str, '\n');
	free(str);
	return (move);
}
