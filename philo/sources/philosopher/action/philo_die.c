/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_die.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:20:07 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 09:35:10 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	philo_die(t_simulation *sim, t_philosopher *philo)
{
	if (!sim->running)
		return ;
	sim->running = 0;
	philo->is_alive = 0;
	display_action(sim, philo, DIED);
}
