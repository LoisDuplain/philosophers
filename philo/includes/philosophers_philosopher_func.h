/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_philosopher_func.h                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:24:39 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 17:42:50 by lduplain         ###   ########.fr       */
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
void	init_philosopher(int id, t_philosopher *philo);

/*
**	Destroy a philosopher.
**	./philosopher/destroy_philosopher.c
*/
void	destroy_philosopher(t_philosopher *philo);

/*
**	Display philosopher action.
**	./philosopher/display_action.c
*/
void	display_action(t_simulation *sim, t_philosopher *philosopher,
			t_philo_action action);

#endif