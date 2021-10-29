/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:35:54 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 13:46:49 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	print_usage(void)
{
	ft_putstr_nl("Usage:");
	ft_putstr("	./philo <number_of_philosophers> <time_to_die> <time_to_eat>");
	ft_putstr(" <time_to_sleep> [number_of_times_each_philosopher_must_eat]");
	ft_putchar('\n');
	ft_putstr_nl("		Example = ./philo 5 800 200 200\n");
	ft_putstr_nl("	Optional number_of_times_each_philosopher_must_eat:");
	ft_putstr_nl("		Example = ./philo 5 800 200 200 5");
}
