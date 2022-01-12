/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listinit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 05:24:08 by yplag             #+#    #+#             */
/*   Updated: 2015/01/08 05:24:09 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*listinit(void)
{
	t_list	*liste;
	t_point	*element;

	liste = malloc(sizeof(*liste));
	element = malloc(sizeof(*element));
	if (liste == NULL || element == NULL)
		return (NULL);
	liste->first = NULL;
	return (liste);
}

void	l_insert(t_list *list, int x, int y, float z)
{
	t_point *new;

	new = malloc(sizeof(*new));
	if (list == NULL || new == NULL)
		return ;
	new->x_s = x;
	new->y_s = y;
	new->z = z;
	new->next = list->first;
	list->first = new;
}

void	freelist(t_list *list)
{
	while (list->first != NULL)
	{
		free(list->first);
		list->first = list->first->next;
	}
}

void	l_modif(t_list *list, t_env *e)
{
	t_point *act;

	act = list->first;
	while (act != NULL)
	{
		act->x = act->x_s - (act->z * 2) + e->d_x;
		act->y = act->y_s - (act->z * 2) + e->d_y;
		act = act->next;
	}
}
