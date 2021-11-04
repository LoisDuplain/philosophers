/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:10:37 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 10:06:59 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# ifndef _POSIX_THREADS
#  define _POSIX_THREADS
# endif

/*
**	START STANDARD INCLUDES
*/

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include <time.h>

/*
**	END STANDARD INCLUDES
*/

/*
**	START CUSTOM INCLUDES
*/

# include "philosophers_philosopher_struct.h"
# include "philosophers_simulation_struct.h"

# include "philosophers_philosopher_func.h"
# include "philosophers_simulation_func.h"
# include "philosophers_parser_func.h"
# include "philosophers_utils_func.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Main function.
**	./main.c
*/
int		main(int argc, char **argv);

/*
**	Print programe usage.
**	./print_usage.c
*/
void	print_usage(void);

#endif
