/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 05:23:55 by yplag             #+#    #+#             */
/*   Updated: 2015/01/08 05:23:56 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/inc/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 16

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	char			*str;
	int				d_x;
	int				d_y;
	int				zoom;
}					t_env;

typedef struct		s_point
{
	float			x;
	float			y;
	float			z;
	int				x_s;
	int				y_s;
	struct s_point	*next;
}					t_point;

typedef struct		s_list
{
	t_point			*first;
}					t_list;

void				l_modif(t_list *list, t_env *e);
void				connect_h(t_list *list, t_env *e);
void				connect_v(t_list *list, t_env *e);
void				point(t_env *e);
t_list				*listinit();
void				l_insert(t_list *list, int x, int y, float z);
char				*get_all(int const fd, char *all);
void				link_points(void *m, void *win, t_point *st, t_point *end);
void				freelist(t_list *list);

#endif
