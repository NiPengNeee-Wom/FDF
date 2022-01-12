/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 16:56:55 by yplag             #+#    #+#             */
/*   Updated: 2015/01/08 05:12:45 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isblank(int i)
{
	if (i == ' ' || i == '\t' || i == '\n')
		return (1);
	return (0);
}
