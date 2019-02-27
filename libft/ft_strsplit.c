/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:11:28 by lramard           #+#    #+#             */
/*   Updated: 2019/02/18 14:03:16 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size_words(char const *s, char c)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	if (s[i] == 0)
		return (0);
	if (s[i] != c)
		words++;
	i++;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void		ft_size_letter(char **mem, char const *s, char c)
{
	uint32_t i;
	uint32_t j;
	uint32_t nb_letter;

	i = 0;
	j = 0;
	nb_letter = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i] != '\0'))
		{
			nb_letter++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				i++;
				mem[j] = (char*)malloc(sizeof(char) * (nb_letter + 1));
				j++;
				nb_letter = 0;
			}
		}
		i++;
	}
	mem[j] = (char*)malloc(sizeof(char) * (1));
}

char			**ft_strsplit(char const *s, char c)
{
	uint32_t		i;
	char			**mem;
	int				j;
	int				size;

	j = 0;
	if ((s == NULL) ||
		(!(mem = (char **)malloc(sizeof(char *) * (ft_size_words(s, c) + 1)))))
		return (NULL);
	ft_size_letter(mem, s, c);
	size = ft_size_words(s, c);
	while (j < size)
	{
		i = 0;
		while ((*s == c) && (*s != '\0'))
			s++;
		while ((*s != c) && (*s != '\0'))
		{
			mem[j][i++] = *s;
			s++;
		}
		mem[j++][i] = '\0';
	}
	mem[j] = 0;
	return (mem);
}
