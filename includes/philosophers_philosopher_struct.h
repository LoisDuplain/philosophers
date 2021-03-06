/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_philosopher_struct.h                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:24:39 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 16:35:25 by lduplain         ###   ########.fr       */
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
	struct s_simulation	*sim;
	int					id;
	pthread_mutex_t		*prev_fork;
	pthread_mutex_t		fork;
	int					is_alive;
	int					nb_meal;
	unsigned long long	last_meal_t;
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