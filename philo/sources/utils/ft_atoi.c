/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:52:26 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 15:59:54 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_atoi(char *str)
{
	size_t	i;
	long	result;

	i = 0;
	result = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '+')
		i++;
	if (!is_numberstr(&str[i]))
		return (-1);
	if (ft_strlen(&str[i]) > 10)
		return (-2);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + str[i++] - 48;
	if (result > INT_MAX)
		return (-3);
	return ((int)result);
}
