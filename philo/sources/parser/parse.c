/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:33:14 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 16:36:35 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	parse(t_simulation *sim, int argc, char **argv)
{
	if (!parse_value(argv[0], &sim->n_philosophers)
		|| !parse_value(argv[1], &sim->time_to_die)
		|| !parse_value(argv[2], &sim->time_to_eat)
		|| !parse_value(argv[3], &sim->time_to_sleep))
		return (0);
	if (sim->n_philosophers < 1)
	{
		printf("Number of philosophers should be greater than 1.\n");
		return (0);
	}
	if (argc != 5)
		sim->n_times_each_philosopher_must_eat = 0;
	else
	{
		if (!parse_value(argv[4], &sim->n_times_each_philosopher_must_eat))
			return (0);
		if (sim->n_times_each_philosopher_must_eat <= 0)
		{
			printf("n_times_each_philosopher_must_eat must be > 0.\n");
			return (0);
		}
	}
	return (1);
}
