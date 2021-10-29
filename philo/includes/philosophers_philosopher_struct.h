/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_philosopher_struct.h                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:24:39 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 17:33:34 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_PHILOSOPHER_STRUCT_H
# define PHILOSOPHERS_PHILOSOPHER_STRUCT_H

/*
**	START CUSTOM INCLUDES
*/

# include "philosophers.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/

typedef struct s_philosopher
{
	int				id;
	pthread_mutex_t	*prev_fork;
	pthread_mutex_t	fork;
	int				is_alive;
	int				is_sleeping;
	int				is_eating;
	int				is_thinking;
}	t_philosopher;

typedef enum e_philo_action
{
	DIED,
	SLEEPING,
	THINKING,
	EATING,
	TAKEN_FORK
}	t_philo_action;

/*
**	END DEFINES
*/

#endif