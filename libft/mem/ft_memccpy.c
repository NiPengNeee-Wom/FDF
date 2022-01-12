/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:02:49 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:02:50 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dswap;
	const char	*sswap;

	if (n && dest && src)
	{
		dswap = dest;
		sswap = src;
		while (n--)
		{
			if (*sswap == c)
			{
				*dswap++ = *sswap++;
				return (dswap);
			}
			*dswap++ = *sswap++;
		}
	}
	return (0);
}
