/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 14:43:01 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/29 18:29:17 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_STRUCT_H
# define CHECKER_STRUCT_H

# include "../libft/libft.h"
# include "checker.h"

typedef struct			s_stack
{
	size_t				nbr;
	struct	s_stack		*next;
//	size_t				size = ft_list_size_stack(s_stack);
}						t_stack;

typedef struct		s_checker
{
	int				argc;
	char			*line;
}					t_checker;

typedef struct	s_index
{
	int			i;
	int			j;
}				t_index;

#endif
