/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:04:39 by yplag             #+#    #+#             */
/*   Updated: 2014/12/15 17:04:41 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		sign;
	int		num;

	sign = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = 42;
	if (*str == '-' || *str == '+')
		str++;
	num = 0;
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (sign)
		num = -num;
	return (num);
}
