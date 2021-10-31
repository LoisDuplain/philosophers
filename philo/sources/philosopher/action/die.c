/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain < lduplain@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:20:07 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/31 15:29:52 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	die(t_simulation *sim, t_philosopher *philo)
{
	if (!sim->running)
		return ;
	display_action(sim, philo, DIED);
	philo->is_alive = 0;
	sim->running = 0;
}
