/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philosopher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:04:59 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 09:58:10 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	init_philosopher(t_simulation *sim, int id, t_philosopher *philo)
{
	philo->sim = sim;
	philo->id = id;
	pthread_mutex_init(&philo->fork, NULL);
	philo->is_alive = 1;
	philo->is_sleeping = 0;
	philo->is_eating = 0;
	philo->is_thinking = 0;
	philo->nb_meal = 0;
	philo->last_meal_t = get_timestamp();
}
