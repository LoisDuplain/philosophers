/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_simulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:44:54 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 17:43:25 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	destroy_simulation(t_simulation *sim)
{
	int	index;

	index = 0;
	while (index < sim->n_philosophers)
	{
		destroy_philosopher(&sim->philos[index]);
		index++;
	}
	free(sim->philos);
	free(sim->threads);
	pthread_mutex_destroy(&sim->writing);
}
