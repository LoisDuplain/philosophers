/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_parser_func.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:13:19 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/02 16:26:11 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_PARSER_FUNC_H
# define PHILOSOPHERS_PARSER_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "philosophers.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print char on standard output.
**	./parser/parse.c
*/
int	parse(t_simulation *sim, int argc, char **argv);

/*
**	Convert to int and store it in dest.
**	./parser/parse_value.c
*/
int	parse_value(char *source, int *dest);

#endif
