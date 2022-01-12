/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_points.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 05:24:02 by yplag             #+#    #+#             */
/*   Updated: 2015/01/08 05:24:03 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		get_color(t_point *st, t_point *end)
{
	if (st->z == 0 && end->z == 0)
		return (0xFFFFFF);
	else if (st->z > 0 && end->z > 0)
		return (0x33FFFF);
	else if (st->z < 0 && end->z < 0)
		return (0x001E70);
	else if (st->z <= 0 && end->z <= 0)
		return (0x097D30);
	else
		return (0xFF0000);
}

void	link1(void *mlx, void *win, t_point *st, t_point *end)
{
	float	ratio1;
	float	ratio2;
	float	x;
	float	y;
	int		c;

	x = st->x;
	y = st->y;
	c = get_color(st, end);
	ratio1 = ((st->x - end->x) / ((st->x - end->x) + (st->y - end->y))) / 2;
	ratio2 = ((st->y - end->y) / ((st->x - end->x) + (st->y - end->y))) / 2;
	while (x >= end->x && y >= end->y)
	{
		mlx_pixel_put(mlx, win, x, y, c);
		x = x - ratio1;
		y = y - ratio2;
	}
}

void	link2(void *mlx, void *win, t_point *st, t_point *end)
{
	float	ratio1;
	float	ratio2;
	float	x;
	float	y;
	int		c;

	x = st->x;
	y = st->y;
	c = get_color(st, end);
	ratio1 = ((st->x - end->x) / ((st->x - end->x) + (end->y - st->y))) / 2;
	ratio2 = ((end->y - st->y) / ((st->x - end->x) + (end->y - st->y))) / 2;
	while (x >= end->x && y <= end->y)
	{
		mlx_pixel_put(mlx, win, x, y, c);
		x = x - ratio1;
		y = y + ratio2;
	}
}

void	link_points(void *mlx, void *win, t_point *st, t_point *end)
{
	if (st->x >= end->x && st->y >= end->y)
	{
		link1(mlx, win, st, end);
	}
	else if (st->x <= end->x && st->y <= end->y)
	{
		link1(mlx, win, end, st);
	}
	else if (st->x >= end->x && st->y <= end->y)
	{
		link2(mlx, win, st, end);
	}
	else if (st->x <= end->x && st->y >= end->y)
	{
		link2(mlx, win, end, st);
	}
}
