/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:10:17 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 15:42:30 by lduplain         ###   ########.fr       */
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
	if (!init_simulation(&sim))
	{
		destroy_simulation(&sim);
		return (EXIT_FAILURE);
	}
	start_simulation(&sim);
	destroy_simulation(&sim);
	return (EXIT_SUCCESS);
}
