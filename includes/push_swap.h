/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:24:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 20:07:06 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef env_H
# define env_H

# include "../libft/libft.h"
# include "../ft_printf/includes/ft_printf.h"
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

int			checker(t_push_swap *env);
int			push_swap(t_push_swap *env);

int			ft_stack_format(char *av);
int			ft_stack_max(ssize_t av);
int			ft_stack_doublon(t_stack *stack);

void		swap_a(t_push_swap *env);
void		swap_b(t_push_swap *env);
void		swap_s(t_push_swap *env);

void		push_a(t_push_swap *env);
void		push_b(t_push_swap *env);

void		rotate_a(t_push_swap *env);
void		rotate_b(t_push_swap *env);
void		rotate_r(t_push_swap *env);

void		reverse_rotate_a(t_push_swap *env);
void		reverse_rotate_b(t_push_swap *env);
void		reverse_rotate_r(t_push_swap *env);

int			ft_stack_check(t_push_swap *env);

t_stack		*ft_create_elem_stack(ssize_t nbr);

void		ft_stack_push_back(t_stack **stack, ssize_t nbr);
void		ft_stack_push_front(t_stack **stack, ssize_t nbr);

void		ft_stack_delone_front(t_stack **stack);
void		ft_stack_delone_back(t_stack **stack);

size_t		ft_stack_size(t_stack *stack);
void		ft_size(t_push_swap *env);
void		ft_stack_display(t_push_swap *env);
t_stack		*ft_stack_at(t_stack *begin_list, size_t nbr);
ssize_t		ft_stack_val_at(t_stack *begin_list, size_t nbr);

void	ft_stack_val_bord(t_push_swap *env);

int		algo_naif(t_push_swap *env);
void	algo_naif_2(t_push_swap *env);
void	algo_naif_3(t_push_swap *env);
void	algo_naif_4(t_push_swap *env);
void	algo_naif_5(t_push_swap *env);
void	algo_min(t_push_swap *env);
void	algo_mergesort(t_push_swap *env);
//void	ft_mergesort(t_push_swap *env, ssize_t size);
void	algo_quicksort(t_push_swap *env);
void	ft_insertionsort(t_push_swap *env);
void	terry(t_push_swap *env);
void	algo_test(t_push_swap *env);

int	ft_count_a(t_push_swap *env);
int	ft_count_b(t_push_swap *env);
int		ft_tabdone_a(t_push_swap *env);
int		ft_tabdone_b(t_push_swap *env);
int	is_pivot_a(t_push_swap *env);
int	is_pivot_b(t_push_swap *env);

void	tri_rapide(int *tableau, int taille);
void	quickSort(int tableau[], int debut, int fin);
void tri_fusion(int tableau[],int longueur);

#endif
