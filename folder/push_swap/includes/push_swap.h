/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:24:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/04 17:44:33 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../../libft/libft.h"
# include "../../../ft_printf/includes/ft_printf.h"
# include "push_swap_struct.h"

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

int			ft_push_swap(t_push_swap *push_swap);

int			ft_stack_format(char *av);
int			ft_stack_max(ssize_t av);
int			ft_stack_doublon(t_stack *stack);

void		ft_swap_a(t_push_swap *push_swap);
void		ft_swap_b(t_push_swap *push_swap);
void		ft_swap_s(t_push_swap *push_swap);

void		ft_push_a(t_push_swap *push_swap);
void		ft_push_b(t_push_swap *push_swap);

void		ft_rotate_a(t_push_swap *push_swap);
void		ft_rotate_b(t_push_swap *push_swap);
void		ft_rotate_r(t_push_swap *push_swap);

void		ft_reverse_rotate_a(t_push_swap *push_swap);
void		ft_reverse_rotate_b(t_push_swap *push_swap);
void		ft_reverse_rotate_r(t_push_swap *push_swap);

int			ft_stack_check(t_push_swap *push_swap);

t_stack		*ft_create_elem_stack(ssize_t nbr);

void		ft_stack_push_back(t_stack **stack, ssize_t nbr);
void		ft_stack_push_front(t_stack **stack, ssize_t nbr);

void		ft_stack_delone_front(t_stack **stack);
void		ft_stack_delone_back(t_stack **stack);

size_t		ft_stack_size(t_stack *stack);
void		ft_size(t_push_swap *push_swap);
void		ft_stack_display(t_push_swap *push_swap);
//void		ft_stack_display(t_stack *stack_a, t_stack *stack_b);
t_stack		*ft_stack_at(t_stack *begin_list, size_t nbr);
ssize_t	ft_stack_val_at(t_stack *begin_list, size_t nbr);

void	ft_stack_val_bord(t_push_swap *push_swap);

int		ft_naif(t_push_swap *push_swap);
void	ft_mergesort(t_push_swap *push_swap);
//void	ft_mergesort(t_push_swap *push_swap, ssize_t size);
void	ft_quicksort(t_push_swap *push_swap);
void	ft_insertionsort(t_push_swap *push_swap);
void	ft_terry(t_push_swap *push_swap);
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
