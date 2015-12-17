/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelbacq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:50:20 by cfelbacq          #+#    #+#             */
/*   Updated: 2015/12/17 15:00:22 by cfelbacq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

static void	puttab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void		ft_free_tab(char **tab, int tab_size)
{
	int i;

	i = 0;
	while (i < tab_size)
	{
		ft_strdel(&tab[i]);
		i++;
	}
	ft_strdel(tab);
}

int			main(int argc, char **argv)
{
	t_tetrimino *start;
	char		**tab;

	start = NULL;
	tab = NULL;
	g_nb_tetrimino = 0;
	if (argc != 2)
	{
		ft_putendl("error");
		return (0);
	}
	tab = read_stdin(argv[1]);
	if (ft_check(tab) == 0)
	{
		ft_putendl("error");
		ft_free_tab(tab, g_nb_tetrimino + 1);
		return (0);
	}
	start = ft_splittab(tab);
	ft_free_tab(tab, g_nb_tetrimino + 1);
	arrange(start);
	puttab(solve(start, 2, NULL));
	return (1);
}
