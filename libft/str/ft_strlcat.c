/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:06:21 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:06:22 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	char			*dest_swap;
	char			*src_swap;
	unsigned int	size_swap;
	unsigned int	dest_len;

	dest_swap = dest;
	src_swap = (char *)src;
	size_swap = size;
	while (size_swap-- && *dest_swap)
		dest_swap++;
	dest_len = dest_swap - dest;
	size_swap = size - dest_len;
	if (size_swap == 0)
		return (dest_len + ft_strlen(src_swap));
	while (*src_swap)
	{
		if (size_swap != 1)
		{
			*dest_swap++ = *src_swap;
			size_swap--;
		}
		src_swap++;
	}
	*dest_swap = '\0';
	return (dest_len + (src_swap - src));
}
