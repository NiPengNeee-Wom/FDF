/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:06:54 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:06:55 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	char *swap;

	swap = dest;
	while (*swap)
		swap++;
	while (*src && (n > 0))
	{
		*swap = *src;
		swap++;
		src++;
		n--;
	}
	*swap = '\0';
	return (dest);
}
