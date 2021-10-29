/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers_utils_func.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:13:19 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/29 17:29:11 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_UTILS_FUNC_H
# define PHILOSOPHERS_UTILS_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "philosophers.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print char on standard output.
**	./utils/ft_putchar.c
*/
void				ft_putchar(char c);

/*
**	Print string on standard output.
**	./utils/ft_putstr.c
*/
void				ft_putstr(char *str);

/*
**	Print string on standard output with a newline at the end.
**	./utils/ft_putstr_nl.c
*/
void				ft_putstr_nl(char *str);

/*
**	Return 1 if char c is a digit character.
**	./utils/is_digit.c
*/
int					is_digit(int c);

/*
**	Return 1 if string str contains only digits.
**	./utils/is_digit.c
*/
int					is_numberstr(char *str);

/*
**	Get the length of string str.
**	./utils/ft_strlen.c
*/
size_t				ft_strlen(char *str);

/*
**	Convert string to int.
**	./utils/ft_atoi.c
*/
int					ft_atoi(char *str);

/*
**	Get the timestamp.
**	./utils/get_timestamp.c
*/
unsigned long long	get_timestamp(void);

/*
**	Print unsigned long long number.
**	./utils/ft_putull.c
*/
void				ft_putull(unsigned long long number);

#endif
