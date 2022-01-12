/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:08:02 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:08:03 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (!s)
		return (0);
	str = ft_strnew(len);
	if (start + len > ft_strlen(s) || !str)
		return (0);
	str = ft_strncpy(str, s + start, len);
	return (str);
}
