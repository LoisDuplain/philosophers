/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_simulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain < lduplain@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:49:15 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/31 14:37:39 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	check_meal(t_simulation *sim)
{
	size_t	index;

	while (sim->running)
	{
		index = 0;
		while (index < sim->n_philosophers)
		{
			index++;
		}
	}
	return (1);
}

void	simulate_philo(void *data)
{
	
}

int	start_simulation(t_simulation *sim)
{
	size_t	index;

	sim->start_timestamp = get_timestamp();
	sim->running = 1;
	index = 0;
	while (index < sim->n_philosophers)
	{
		if (pthread_create(&sim->threads[index], NULL,
				simulate_philo, &sim->philos[index]) != 0)
			sim->running = 0;
		index++;
	}
	return (1);
}
