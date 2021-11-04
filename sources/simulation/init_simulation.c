/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_simulation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:19:02 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 17:28:56 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	init_simulation(t_simulation *sim)
{
	int	index;

	sim->philos = malloc(sim->n_philosophers * sizeof(t_philosopher));
	if (sim->philos == NULL)
		return (0);
	index = 0;
	while (index < sim->n_philosophers)
	{
		init_philosopher(sim, index + 1, &sim->philos[index]);
		if (index > 0)
			sim->philos[index].prev_fork = &sim->philos[index - 1].fork;
		index++;
	}
	sim->philos[0].prev_fork = &sim->philos[index - 1].fork;
	sim->threads = malloc(sim->n_philosophers * sizeof(pthread_t));
	if (sim->threads == NULL)
		return (0);
	pthread_mutex_init(&sim->writing, NULL);
	pthread_mutex_init(&sim->meal_checker, NULL);
	return (1);
}
