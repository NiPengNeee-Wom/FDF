/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:02:44 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:02:45 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (!size)
		return (0);
	ptr = (void *)malloc(sizeof(*ptr) * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size);
	return (ptr);
}
