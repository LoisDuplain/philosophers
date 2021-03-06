/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_eat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:37:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 17:28:50 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	take_forks(t_simulation *sim, t_philosopher *philo)
{
	pthread_mutex_lock(&philo->fork);
	if (sim->running && philo->is_alive)
	{
		display_action(sim, philo, TAKEN_FORK);
		pthread_mutex_lock(philo->prev_fork);
		if (sim->running && philo->is_alive)
			display_action(sim, philo, TAKEN_FORK);
	}
}

void	release_forks(t_philosopher *philo)
{
	pthread_mutex_unlock(&philo->fork);
	pthread_mutex_unlock(philo->prev_fork);
}

void	philo_eat(t_simulation *sim, t_philosopher *philo)
{
	unsigned long long	start_t;

	if (!sim->running)
		return ;
	take_forks(sim, philo);
	if (sim->running && philo->is_alive)
	{
		display_action(sim, philo, EATING);
		philo->last_meal_t = get_timestamp();
		philo->nb_meal++;
		start_t = get_timestamp();
		while (sim->running)
		{
			if ((int)(get_timestamp() - start_t) >= sim->time_to_eat)
				break ;
			usleep(10);
		}
	}
	release_forks(philo);
}
