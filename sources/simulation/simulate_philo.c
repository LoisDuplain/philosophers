/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simulate_philo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:42:13 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 10:45:58 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	*simulate_philo(void *philosopher)
{
	t_philosopher	*philo;
	t_simulation	*sim;

	philo = philosopher;
	sim = philo->sim;
	if (philo->id % 2 == 0)
		usleep(sim->time_to_eat);
	while (sim->running && philo->is_alive)
	{
		if (sim->running && philo->is_alive)
			philo_eat(sim, philo);
		if (sim->running && philo->is_alive)
			philo_sleep(sim, philo);
		if (philo->is_alive && sim->n_times_each_philosopher_must_eat
			&& philo->nb_meal == sim->n_times_each_philosopher_must_eat)
			return (NULL);
		if (sim->running && philo->is_alive)
			philo_think(sim, philo);
	}
	return (NULL);
}
