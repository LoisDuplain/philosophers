/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_simulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:49:15 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 10:42:44 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	start_simulation(t_simulation *sim)
{
	int	index;

	sim->running = 1;
	sim->start_timestamp = get_timestamp();
	index = 0;
	while (index < sim->n_philosophers)
	{
		if (pthread_create(&sim->threads[index], NULL,
				simulate_philo, &sim->philos[index]) != 0)
			sim->running = 0;
		index++;
	}
	check_meal(sim);
	index = 0;
	while (index < sim->n_philosophers)
	{
		pthread_detach(sim->threads[index]);
		index++;
	}
}
