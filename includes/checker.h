/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:00:32 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 19:13:22 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"

# define SA "sa"
# define SB "sb"
# define SS "ss"
# define PA "pa"
# define PB "pb"
# define RA "ra"
# define RB "rb"
# define RR "rr"
# define RRA "rra"
# define RRB "RRB"
# define RRR "rrr"

typedef struct	s_checker
{
	char		*stack_a;
}				t_checker;

int	ft_checker_format();
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
