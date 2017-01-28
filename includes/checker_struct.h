/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 14:43:01 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 16:29:52 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_STRUCT_H
# define CHECKER_STRUCT_H

# include "../libft/libft.h"

typedef struct	s_checker
{
	int			argc;
	char		*line;
	char		**argum;
	size_t		size_a;
	size_t		size_b;
	int			*stack_a;
	int			*stack_b;
}				t_checker;

typedef struct	s_index
{
	int			i;
	int			j;
}				t_index;

#endif
