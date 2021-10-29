/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_simulation_struct.h                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:24:39 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 17:41:04 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_SIMULATION_STRUCT_H
# define PHILOSOPHERS_SIMULATION_STRUCT_H

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

typedef struct s_simulation
{
	int				n_philosophers;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				n_times_each_philosopher_must_eat;
	t_philosopher	*philos;
	pthread_t		*threads;
	pthread_mutex_t	writing;
}	t_simulation;

/*
**	END DEFINES
*/

#endif