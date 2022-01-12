/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 05:24:14 by yplag             #+#    #+#             */
/*   Updated: 2015/01/09 01:14:51 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		key_hook(int keycode, t_env *e)
{
	if (keycode == 65361)
		e->d_x -= 10;
	if (keycode == 65362)
		e->d_y -= 10;
	if (keycode == 65363)
		e->d_x += 10;
	if (keycode == 65364)
		e->d_y += 10;
	if (keycode == 65453 && e->zoom > 5)
		e->zoom -= 5;
	if (keycode == 65451)
		e->zoom += 5;
	if (keycode == 65307)
		exit(0);
	mlx_clear_window(e->mlx, e->win);
	point(e);
	return (0);
}

int		expose_hook(t_env *e)
{
	point(e);
	return (0);
}

int		main(int ac, char **av)
{
	t_env	e;
	int		fd;

	e.zoom = 25;
	e.d_x = 50;
	e.d_y = 50;
	if (ac != 2)
	{
		ft_putstr("Two Arguments Are Needed\n");
		return (0);
	}
	if ((fd = open(av[1], O_RDONLY)) == -1)
		return (0);
	e.str = get_all(fd, e.str);
	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 10001, 3001, "ergent");
	mlx_key_hook(e.win, key_hook, &e);
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
