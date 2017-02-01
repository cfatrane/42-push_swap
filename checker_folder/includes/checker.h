/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:00:32 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 17:51:28 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../libft/libft.h"
# include "../../ft_printf/includes/ft_printf.h"
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

# define ERROR != SA SB SS PA PB PA PB RA RB RR RRA RRB RRR

int			ft_checker(t_checker *checker);

int			ft_stack_format(char *av);
int			ft_stack_max(size_t av);
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

t_stack		*ft_create_elem_stack(size_t nbr);

void		ft_stack_push_back(t_stack **stack, size_t nbr);
void		ft_stack_push_front(t_stack **stack, size_t nbr);

void		ft_stack_delone_front(t_stack **stack);
void		ft_stack_delone_back(t_stack **stack);

size_t		ft_stack_size(t_stack *stack);
void		ft_stack_display(t_stack *stack);

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
