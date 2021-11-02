/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_simulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:49:15 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 11:00:32 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	check_meal(t_simulation *sim)
{
	int	index;
	int	diff_time;

	while (sim->running)
	{
		if (philos_ate_maximum(sim))
			break ;
		index = 0;
		while (index < sim->n_philosophers)
		{
			pthread_mutex_lock(&sim->meal_checker);
			diff_time = get_timestamp() - sim->philos[index].last_meal_t;
			if (diff_time >= sim->time_to_die)
			{
				philo_die(sim, &sim->philos[index]);
				return (0);
			}
			pthread_mutex_unlock(&sim->meal_checker);
			index++;
		}
	}
	return (1);
}

void	*simulate_philo(void *data)
{
	t_philosopher	*philo;
	t_simulation	*sim;

	philo = data;
	sim = philo->sim;
	if (philo->id % 2 == 1)
		usleep(15000);
	while (sim->running && philo->is_alive)
	{
		if (sim->running && philo->is_alive && !philo->is_eating)
			philo_eat(sim, philo);
		if (sim->running && philo->is_alive && !philo->is_sleeping)
			philo_sleep(sim, philo);
		if (philo->is_alive && sim->n_times_each_philosopher_must_eat
			&& philo->nb_meal == sim->n_times_each_philosopher_must_eat)
			break ;
		if (sim->running && philo->is_alive && !philo->is_thinking)
			philo_think(sim, philo);
	}
	return (data);
}

int	start_simulation(t_simulation *sim)
{
	int	index;

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
	if (!check_meal(sim))
		return (0);
	return (1);
}
