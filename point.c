/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 05:24:21 by yplag             #+#    #+#             */
/*   Updated: 2015/01/08 05:24:22 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	createlist(t_list *list, t_env *e)
{
	float	x;
	float	y;
	int		i;

	x = 50;
	y = 50;
	i = 0;
	while (e->str[i])
	{
		l_insert(list, x, y, ft_atoi(e->str + i));
		while (e->str[i] == ' ')
			i++;
		while (ft_isdigit((int)e->str[i]) || e->str[i] == '-')
			i++;
		while (e->str[i] == ' ')
			i++;
		x = x + e->zoom;
		while (e->str[i] == '\n')
		{
			i++;
			x = 50;
			y = y + e->zoom;
		}
	}
}

void	point(t_env *e)
{
	t_list	*list;
	int		i;

	list = listinit();
	i = 0;
	while (e->str[i])
	{
		if (ft_isblank((int)e->str[i]) != 1 && e->str[i] != '-')
		{
			if (ft_isdigit((int)e->str[i]) != 1)
			{
				ft_putstr("map error");
				exit(0);
			}
		}
		i++;
	}
	createlist(list, e);
	l_modif(list, e);
	connect_h(list, e);
	connect_v(list, e);
	freelist(list);
}
