/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_action.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:24:09 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 17:42:54 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	display_action(t_simulation *sim, t_philosopher *philosopher,
			t_philo_action action)
{
	pthread_mutex_lock(&sim->writing);
	ft_putull(get_timestamp());
	ft_putchar(' ');
	ft_putull(philosopher->id);
	if (action == DIED)
		ft_putstr_nl(" died");
	else if (action == SLEEPING)
		ft_putstr_nl(" is sleeping");
	else if (action == THINKING)
		ft_putstr_nl(" is thinking");
	else if (action == EATING)
		ft_putstr_nl(" is eating");
	else if (action == TAKEN_FORK)
		ft_putstr_nl(" has taken fork");
	pthread_mutex_unlock(&sim->writing);
}
