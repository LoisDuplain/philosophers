/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_simulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:44:54 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 16:33:37 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	destroy_simulation(t_simulation *sim)
{
	int	index;

	index = 0;
	while (index < sim->n_philosophers)
	{
		pthread_mutex_destroy(&sim->philos[index].fork);
		index++;
	}
	free(sim->philos);
	free(sim->threads);
	pthread_mutex_destroy(&sim->writing);
	pthread_mutex_destroy(&sim->meal_checker);
}
