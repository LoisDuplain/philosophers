/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:26:57 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 17:27:55 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	ft_putull(unsigned long long number)
{
	if (number / 10 > 0)
		ft_putull(number / 10);
	ft_putchar(number % 10 + 48);
}
