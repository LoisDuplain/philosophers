/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_sleep.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:43:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 16:35:06 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	philo_sleep(t_simulation *sim, t_philosopher *philo)
{
	unsigned long long	start_t;

	display_action(sim, philo, SLEEPING);
	start_t = get_timestamp();
	while (sim->running)
	{
		if ((int)(get_timestamp() - start_t) >= sim->time_to_sleep)
			break ;
		usleep(10);
	}
}
