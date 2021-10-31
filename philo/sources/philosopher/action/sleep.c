/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain < lduplain@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:43:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/31 14:51:27 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	sleep(t_simulation *sim, t_philosopher *philo)
{
	display_action(sim, philo, SLEEPING);
	philo->is_eating = 0;
	philo->is_sleeping = 1;
	philo->is_thinking = 0;
	usleep(sim->time_to_sleep);
}
