/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philos_ate_maximum.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:32:32 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 09:41:08 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	philos_ate_maximum(t_simulation *sim)
{
	int				index;

	if (!sim->n_times_each_philosopher_must_eat)
		return (0);
	index = 0;
	while (index < sim->n_philosophers)
	{
		if (sim->philos[index].nb_meal < sim->n_times_each_philosopher_must_eat)
			return (0);
	}
	return (1);
}
