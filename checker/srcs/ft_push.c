/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 16:57:03 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_list_push_front_stack_a(t_checker *checker)
{
	t_stack	*new;
	t_stack	*tmp;

	tmp = checker->stack_a;
	if (!(new = ft_memalloc(sizeof(t_stack))))
		return ;
	new->next = NULL;
	new->prev = NULL;
	new->nbr = checker->stack_b->nbr;
	if (checker->stack_a != NULL)
	{
		checker->stack_a = new;
		new->next = tmp;
		tmp->prev = checker->stack_a;
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->prev = tmp;
	}
	else
		checker->stack_a = new;
	checker->size_a++;
	ft_list_delone_front_stack_b(checker);
}

void	ft_list_push_front_stack_b(t_checker *checker)
{
	t_stack	*new;
	t_stack	*tmp;

	tmp = checker->stack_b;
	if (!(new = ft_memalloc(sizeof(t_stack))))
		return ;
	new->next = NULL;
	new->prev = NULL;
	new->nbr = checker->stack_a->nbr;
	if (checker->stack_b != NULL)
	{
		checker->stack_b = new;
		new->next = tmp;
		tmp->prev = checker->stack_b;
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->prev = tmp;
	}
	else
		checker->stack_b = new;
	checker->size_b++;
	ft_list_delone_front_stack_a(checker);
}

int	ft_push_a(t_checker *checker)
{
	if (checker->size_b > 0)
		ft_list_push_front_stack_a(checker);
	t_stack *tmpstack = checker->stack_a;
	while (tmpstack != NULL)
	{
		ft_printf("%d ", tmpstack->nbr);
		tmpstack = tmpstack->next;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_push_b(t_checker *checker)
{
	if (checker->size_a > 0)
		ft_list_push_front_stack_b(checker);
	t_stack *tmpstack = checker->stack_b;
	while (tmpstack != NULL)
	{
		ft_printf("%d ", tmpstack->nbr);
		tmpstack = tmpstack->next;
	}
	ft_putchar('\n');
	return (0);
}
