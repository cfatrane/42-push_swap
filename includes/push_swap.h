/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:24:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/17 18:50:14 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "push_swap_struct.h"

# define SA "\033[33msa\033[0m"
# define SB "\033[33msb\033[0m"
# define SS "\033[33mss\033[0m"
# define PA "\033[31mpa\033[0m"
# define PB "\033[31mpb\033[0m"
# define RA "\033[32mra\033[0m"
# define RB "\033[32mrb\033[0m"
# define RR "\033[32mrr\033[0m"
# define RRA "\033[34mrra\033[0m"
# define RRB "\033[34mrrb\033[0m"
# define RRR "\033[34mrrr\033[0m"

int			checker(t_push_swap *env);
int			push_swap(t_push_swap *env);

int			ft_error(char *av);
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

t_stack		*ft_create_elem_stack(ssize_t nbr);
t_stack		*ft_stack_push_params(int ac, char **av, t_push_swap *env);
void		ft_stack_push_back(t_stack **stack, ssize_t nbr);
void		ft_stack_push_front(t_stack **stack, ssize_t nbr);

void		ft_stack_delone_front(t_stack **stack);
void		ft_stack_delone_back(t_stack **stack);
void		ft_stack_clear(t_stack **begin_list);

int			ft_stack_check(t_push_swap *env);
size_t		ft_stack_size(t_stack *stack);
void		ft_size(t_push_swap *env);
void		ft_stack_display(t_push_swap *env);
t_stack		*ft_stack_at(t_stack *begin_list, size_t nbr);
ssize_t		ft_stack_val_at(t_stack *begin_list, size_t nbr);
void		stack_val_bord(t_push_swap *env);

void		algo_min(t_push_swap *env);
void		algo_med(t_push_swap *env);
void		algo_sup(t_push_swap *env);
void		algo_sup_bis(t_push_swap *env);
void		algo_max(t_push_swap *env);
void		algo_card_sort(t_push_swap *env);
void		algo_sup_mid_inf(t_push_swap *env);
void		algo_sup_mid_sup(t_push_swap *env);

int			tabdone(t_stack *stack, ssize_t nbr);
int			tabundone(t_stack *stack, ssize_t nbr);
int			mediane(t_push_swap *env, ssize_t med);
int			unmediane(t_push_swap *env, ssize_t med);
int			stack_crescent(t_push_swap *env);
int			stack_descending(t_push_swap *env);

int			*convert_tab(t_push_swap *env);
void		define_med(t_push_swap *env, int *tab);
void		tri_rapide(int *tableau, int taille);

#endif
