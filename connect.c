/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   connect.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 05:23:08 by yplag             #+#    #+#             */
/*   Updated: 2015/01/08 05:23:41 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	connect_h(t_list *list, t_env *e)
{
	t_point *act;

	act = list->first;
	while (act != NULL)
	{
		if (act->next != NULL && act->x_s != 50)
			link_points(e->mlx, e->win, act, act->next);
		act = act->next;
	}
}

void	connect_v(t_list *list, t_env *e)
{
	t_point *act;
	t_point *tmp;

	act = list->first;
	while (act)
	{
		tmp = list->first;
		while (tmp)
		{
			if (tmp->x_s == act->x_s && tmp->y_s == act->y_s - e->zoom)
				link_points(e->mlx, e->win, act, tmp);
			tmp = tmp->next;
		}
		act = act->next;
	}
}
