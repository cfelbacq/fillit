/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_shape.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfelbacq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 16:20:46 by cfelbacq          #+#    #+#             */
/*   Updated: 2015/12/20 17:41:00 by cfelbacq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		get_width(char *s)
{
	int i;
	int width;

	i = 0;
	width = 0;
	while (i < 4)
	{
		if(s[i] == '#' || s[i + 5] == '#' || s[i + 10] == '#' ||\
				s[i + 15] == '#')
			width++;
		i++;
	}
	return (width);
}

int		get_height(char *s)
{
	int i;
	int j;
	int height;

	i = 0;
	j = 0;
	height = 0;
	while(i < 19)
	{
		if(s[i] == '#' || s[i + 1] == '#' || s[i + 2] == '#' ||\
				s[i + 3] == '#')
			height++;
		i = i + 5;
	}
	return (height);
}

int		ft_is_alone(char *s)
{
	int i;
	int ok;

	i = 0;
	ok = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '#')
		{
			if (s[i + 1] == '#' || s[i - 1] == '#' || s[i + 5] == '#' ||\
					s[i - 5] == '#')
				ok++;
			if (ok == 4)
				return (1);
		}
		i++;
	}
	return (0);
}
