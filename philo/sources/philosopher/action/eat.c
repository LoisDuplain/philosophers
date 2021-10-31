/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain < lduplain@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:37:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/31 15:30:49 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	eat(t_simulation *sim, t_philosopher *philo)
{
	pthread_mutex_lock(&philo->fork);
	if (sim->running && philo->is_alive)
		display_action(sim, philo, TAKEN_FORK);
	pthread_mutex_lock(philo->prev_fork);
	if (sim->running && philo->is_alive)
		display_action(sim, philo, TAKEN_FORK);
	if (philo->is_alive)
	{
		pthread_mutex_lock(&sim->meal_checker);
		display_action(sim, philo, EATING);
		philo->last_meal_timestamp = get_timestamp();
		philo->is_eating = 1;
		philo->is_sleeping = 0;
		philo->is_thinking = 0;
		philo->nb_meal++;
		pthread_mutex_unlock(&sim->meal_checker);
	}
	pthread_mutex_unlock(&philo->fork);
	pthread_mutex_unlock(philo->prev_fork);
}
