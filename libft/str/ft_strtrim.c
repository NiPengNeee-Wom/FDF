/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:08:09 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:08:10 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	char	*swap;

	if (!s)
		return (0);
	while (*s && (ft_isblank(*s) || *s == '\n'))
		s++;
	if (!*s)
		return (ft_strnew(1));
	len = ft_strlen(s) - 1;
	while (*s && (ft_isblank(s[len]) || s[len] == '\n'))
		len--;
	swap = ft_strnew(len);
	if (!swap)
		return (0);
	swap = ft_strncpy(swap, s, len + 1);
	swap[len + 1] = '\0';
	return (swap);
}
