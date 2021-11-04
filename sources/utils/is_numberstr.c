/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_numberstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:50:31 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 15:56:49 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	is_numberstr(char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (!is_digit(str[index]))
			return (0);
		index++;
	}
	return (1);
}
