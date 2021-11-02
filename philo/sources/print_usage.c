/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:35:54 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 15:43:24 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	print_usage(void)
{
	printf("Usage:\n");
	printf("	./philo <number_of_philosophers> <time_to_die> <time_to_eat>");
	printf(" <time_to_sleep> [number_of_times_each_philosopher_must_eat]\n");
	printf("		Example = ./philo 5 800 200 200\n");
	printf("	Optional number_of_times_each_philosopher_must_eat:\n");
	printf("		Example = ./philo 5 800 200 200 5\n");
}
