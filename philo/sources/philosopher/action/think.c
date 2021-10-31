/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   think.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain < lduplain@student.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:41:35 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/31 15:19:44 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	think(t_simulation *sim, t_philosopher *philo)
{
	display_action(sim, philo, THINKING);
	philo->is_eating = 0;
	philo->is_sleeping = 0;
	philo->is_thinking = 1;
}
