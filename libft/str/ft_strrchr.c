/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:07:33 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:07:34 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *ret;

	ret = 0;
	while (*s)
	{
		if (*s == (char)c)
			ret = s;
		s++;
	}
	if (*s == (char)c)
		ret = s;
	return ((char *)ret);
}
