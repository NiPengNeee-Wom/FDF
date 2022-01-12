/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:07:39 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:07:40 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strrindex(const char *s, int c)
{
	int	ret;
	int	i;

	i = 0;
	ret = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = i;
		i++;
	}
	if (s[i] == (char)c)
		ret = i;
	return (ret);
}
