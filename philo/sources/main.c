/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:10:17 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 17:39:28 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char **argv)
{
	t_simulation	sim;

	if (argc < 5 || argc > 6)
	{
		print_usage();
		return (EXIT_FAILURE);
	}
	if (!parse(&sim, argc - 1, &argv[1]))
		return (EXIT_FAILURE);
	/* printf("main - n_philosophers: %d\n", sim.n_philosophers);
	printf("main - time_to_die: %d\n", sim.time_to_die);
	printf("main - time_to_eat: %d\n", sim.time_to_eat);
	printf("main - time_to_sleep: %d\n", sim.time_to_sleep);
	printf("main - n_times_each_philosopher_must_eat: %d\n", sim.n_times_each_philosopher_must_eat); */
	if (!init(&sim))
	{
		destroy_simulation(&sim);
		return (EXIT_FAILURE);
	}
	destroy_simulation(&sim);
	return (EXIT_SUCCESS);
}
