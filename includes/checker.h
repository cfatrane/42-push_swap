/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:00:32 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/29 19:20:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"
# include "../ft_printf/includes/ft_printf.h"
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

int			ft_checker(t_stack *stack_a, t_stack *stack_b);

int			ft_stack_format(char *av);
int			ft_stack_max(size_t av);

int			ft_swap_a(t_stack *stack_a);
int			ft_swap_b(t_stack *stack_b);
int			ft_swap_s(t_stack *stack_a, t_stack *stack_b);

int			ft_push_a(t_stack *stack_a, t_stack *stack_b);
int			ft_push_b(t_stack *stack_a, t_stack *stack_b);

int			ft_rotate_a(t_stack *stack_a);
int			ft_rotate_b(t_stack *stack_b);
int			ft_rotate_r(t_stack *stack_a, t_stack *stack_b);

int			ft_reverse_rotate_a(t_stack *stack_a);
int			ft_reverse_rotate_b(t_stack *stack_b);
int			ft_reverse_rotate_r(t_stack *stack_a, t_stack *stack_b);

size_t		ft_list_size_stack(t_stack *stack);
t_stack		*ft_list_at_stack(t_stack *stack, unsigned int nbr);
/*
sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a. Ne fait
rien s’il n’y en a qu’un ou aucun.

sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b. Ne fait
rien s’il n’y en a qu’un ou aucun.

ss : sa et sb en même temps.

pa : push a - prend le premier élément au sommet de b et le met sur a. Ne fait
rien si b est vide.

pb : push b - prend le premier élément au sommet de a et le met sur b. Ne fait
rien si a est vide.

ra : rotate a - décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier.

rb : rotate b - décale d’une position vers le haut tous les élements de la pile b.
Le premier élément devient le dernier.

rr : ra et rb en même temps.

rra : reverse rotate a - décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.

rrb : reverse rotate b - décale d’une position vers le bas tous les élements de
la pile b. Le dernier élément devient le premier.

rrr : rra et rrb en même temps.
*/

#endif
