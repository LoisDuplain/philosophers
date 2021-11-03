/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_meal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:42:36 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 10:42:46 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	check_meal(t_simulation *sim)
{
	int	index;
	int	diff_time;

	while (sim->running)
	{
		if (philos_ate_maximum(sim))
			return ;
		index = 0;
		while (index < sim->n_philosophers)
		{
			pthread_mutex_lock(&sim->meal_checker);
			diff_time = get_timestamp() - sim->philos[index].last_meal_t;
			if (diff_time >= sim->time_to_die)
			{
				philo_die(sim, &sim->philos[index]);
				return ;
			}
			pthread_mutex_unlock(&sim->meal_checker);
			index++;
		}
	}
}
