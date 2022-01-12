/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 05:23:46 by yplag             #+#    #+#             */
/*   Updated: 2015/01/08 05:23:49 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_realloc_it(void *old, size_t old_size, size_t new_size)
{
	void	*new;

	if (!(new = (void *)ft_memalloc(new_size ? sizeof(old) * new_size : 1)))
		return (NULL);
	if (old)
	{
		ft_memcpy(new, old, (old_size > new_size) ? (new_size) : (old_size));
		ft_memdel((void *)&old);
	}
	return (new);
}

char	*get_all(int const fd, char *all)
{
	int		ret;
	int		len;
	char	*buf;

	if (!(buf = ft_strnew(BUFF_SIZE + 1)))
		return (NULL);
	if (!(all = ft_strnew(1)))
		return (NULL);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		len = ft_strlen(all) + 1;
		if (!(all = ft_realloc_it((void *)all, len, len + ret)))
			return (NULL);
		ft_strcat(all, buf);
	}
	free(buf);
	return (all);
}
