/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_die.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:20:07 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 11:05:16 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	philo_die(t_simulation *sim, t_philosopher *philo)
{
	philo->is_alive = 0;
	if (!sim->running)
		return ;
	sim->running = 0;
	display_action(sim, philo, DIED);
}
