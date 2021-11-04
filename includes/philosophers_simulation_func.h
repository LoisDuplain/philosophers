/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_simulation_func.h                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:13:19 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 10:45:34 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_SIMULATION_FUNC_H
# define PHILOSOPHERS_SIMULATION_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "philosophers.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Initialize simulation.
**	./init/init_simulation.c
*/
int		init_simulation(t_simulation *sim);

/*
**	Destroy/free simulation.
**	./init/destroy_simulation.c
*/
void	destroy_simulation(t_simulation *sim);

/*
**	Start simulation.
**	./init/start_simulation.c
*/
void	start_simulation(t_simulation *sim);

/*
**	Check if all philosophers ate number_of_times_each_philosopher_must_eat.
**	./init/philos_ate_maximum.c
*/
int		philos_ate_maximum(t_simulation *sim);

/*
**	Check for philosophers must be killed.
**	./init/check_meal.c
*/
void	check_meal(t_simulation *sim);

/*
**	Simulate a philosopher.
**	./init/simulate_philo.c
*/
void	*simulate_philo(void *philosopher);

#endif
