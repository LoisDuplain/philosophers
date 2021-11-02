/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_philosopher_func.h                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:24:39 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 10:06:27 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_PHILOSOPHER_FUNC_H
# define PHILOSOPHERS_PHILOSOPHER_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "philosophers.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Init a philosopher.
**	./philosopher/init_philosopher.c
*/
void	init_philosopher(t_simulation *sim, int id, t_philosopher *philo);

/*
**	Destroy a philosopher.
**	./philosopher/destroy_philosopher.c
*/
void	destroy_philosopher(t_philosopher *philo);

/*
**	Display philosopher action.
**	./philosopher/action/display_action.c
*/
void	display_action(t_simulation *sim, t_philosopher *philosopher,
			t_philo_action action);

/*
**	Kill philosopher.
**	./philosopher/action/die.c
*/
void	philo_die(t_simulation *sim, t_philosopher *philo);

/*
**	Do eating philosopher.
**	./philosopher/action/eat.c
*/
void	philo_eat(t_simulation *sim, t_philosopher *philo);

/*
**	Do sleeping philosopher.
**	./philosopher/action/sleep.c
*/
void	philo_sleep(t_simulation *sim, t_philosopher *philo);

/*
**	Do thinking philosopher.
**	./philosopher/action/think.c
*/
void	philo_think(t_simulation *sim, t_philosopher *philo);

#endif