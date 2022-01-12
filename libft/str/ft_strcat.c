/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:04:55 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:04:56 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*swap;

	swap = dest;
	while (*swap)
		swap++;
	while (*src)
		*(swap++) = *(src++);
	*swap = '\0';
	return (dest);
}
