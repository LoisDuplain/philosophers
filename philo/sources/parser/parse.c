/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:33:14 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 09:29:19 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	parse(t_simulation *sim, int argc, char **argv)
{
	sim->n_philosophers = ft_atoi(argv[0]);
	sim->time_to_die = ft_atoi(argv[1]);
	sim->time_to_eat = ft_atoi(argv[2]);
	sim->time_to_sleep = ft_atoi(argv[3]);
	if (sim->n_philosophers <= 0)
	{
		printf("Number of philosophers must be greater than 0.\n");
		return (0);
	}
	if (sim->time_to_die < 0 || sim->time_to_eat < 0 || sim->time_to_sleep < 0)
	{
		printf("Error in your time values.\n");
		return (0);
	}
	sim->n_times_each_philosopher_must_eat = 0;
	if (argc == 5)
	{
		sim->n_times_each_philosopher_must_eat = ft_atoi(argv[4]);
		if (sim->n_times_each_philosopher_must_eat <= 0)
		{
			printf("n_times_each_philosopher_must_eat must be > 0.\n");
			return (0);
		}
	}
	return (1);
}
