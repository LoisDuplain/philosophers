/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_action.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:24:09 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 17:28:33 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	display_action(t_simulation *sim, t_philosopher *philo,
			t_philo_action action)
{
	unsigned long long	time;

	pthread_mutex_lock(&sim->writing);
	time = get_timestamp();
	printf("%llu (%llu) %d ", time, time - sim->start_timestamp, philo->id);
	if (action == DIED)
		printf("died\n");
	else if (action == SLEEPING)
		printf("is sleeping\n");
	else if (action == THINKING)
		printf("is thinking\n");
	else if (action == EATING)
		printf("is eating\n");
	else if (action == TAKEN_FORK)
		printf("has taken fork\n");
	pthread_mutex_unlock(&sim->writing);
}
