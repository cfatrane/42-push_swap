/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:00:32 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 19:28:46 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../../libft/libft.h"
# include "../../../ft_printf/includes/ft_printf.h"
# include "checker_struct.h"

# define SA "sa"
# define SB "sb"
# define SS "ss"
# define PA "pa"
# define PB "pb"
# define RA "ra"
# define RB "rb"
# define RR "rr"
# define RRA "rra"
# define RRB "rrb"
# define RRR "rrr"

int			ft_checker(t_checker *checker);

int			ft_stack_format(char *av);
int			ft_stack_max(ssize_t av);
int			ft_stack_doublon(t_stack *stack);

void		ft_swap_a(t_checker *checker);
void		ft_swap_b(t_checker *checker);
void		ft_swap_s(t_checker *checker);

void		ft_push_a(t_checker *checker);
void		ft_push_b(t_checker *checker);

void		ft_rotate_a(t_checker *checker);
void		ft_rotate_b(t_checker *checker);
void		ft_rotate_r(t_checker *checker);

void		ft_reverse_rotate_a(t_checker *checker);
void		ft_reverse_rotate_b(t_checker *checker);
void		ft_reverse_rotate_r(t_checker *checker);

int			ft_stack_check(t_checker *checker);

t_stack		*ft_create_elem_stack(ssize_t nbr);

void		ft_stack_push_back(t_stack **stack, ssize_t nbr);
void		ft_stack_push_front(t_stack **stack, ssize_t nbr);

void		ft_stack_delone_front(t_stack **stack);
void		ft_stack_delone_back(t_stack **stack);

size_t		ft_stack_size(t_stack *stack);
void		ft_stack_display(t_stack *stack_a, t_stack *stack_b);

#endif
