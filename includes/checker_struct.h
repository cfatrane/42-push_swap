/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 14:43:01 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/27 20:33:31 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_STRUCT_H
# define CHECKER_STRUCT_H

typedef struct	s_checker
{
	int			argc;
	char		*line;
	char		**argum;
	int			*stack_a;
}				t_checker;

typedef struct	s_index
{
	int			i;
	int			j;
}				t_index;

#endif
