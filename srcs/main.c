/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:59:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 18:06:14 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
/*
   t_stack	*dlist_prepend(t_stack *p_list, int data)
   {
   if (p_list != NULL)
   {
   struct node *p_new = malloc(sizeof *p_new);
   if (p_new != NULL)
   {
   p_new->nbr = data;
   p_new->p_prev = NULL;
   if (p_list->p_tail == NULL)
   {
   p_new->p_next = NULL;
   p_list->p_head = p_new;
   p_list->p_tail = p_new;
   }
   else
   {
   p_list->p_head->p_prev = p_new;
   p_new->p_next = p_list->p_head;
   p_list->p_head = p_new;
   }
   p_list->length++;
   }
   }
   return p_list;
   }*/
void	PushBack(t_dblist *list, int val)
{
	t_stack *nouv = malloc(sizeof(t_stack));

	if (!nouv)
		exit(EXIT_FAILURE);
	nouv->nbr = val;
	nouv->prev = list->last;
	nouv->next = NULL;
	if (list->last)
		list->last->next = nouv;
	else
		list->first = nouv;
	list->last = nouv;
}

static t_stack	*ft_create_elem_stack(size_t nbr)
{
	t_stack	*stack;

	if (!(stack = (t_stack*)malloc(sizeof(*stack))))
		return (NULL);
	stack->nbr = nbr;
	stack->next = NULL;
	return (stack);
}

static void			ft_list_push_back_stack(t_stack **stack, size_t nbr)
{
	if (*stack)
	{
		if ((*stack)->next)
			ft_list_push_back_stack(&(*stack)->next, nbr);
		else
			(*stack)->next = ft_create_elem_stack(nbr);
	}
	else
		*stack = ft_create_elem_stack(nbr);
}

static t_stack	*ft_list_push_params_stack(int ac, char **av)
{
	int			i;
	t_stack		*list;

	list = NULL;
	i = 1;
	if (ac)
		while (i < ac)
		{
			if (ft_stack_format(av[i]) == -1 || ft_stack_max(ft_atoll(av[i])) == -1)
				return (NULL);
			ft_list_push_back_stack(&list, ft_atoll(av[i]));
			i++;
		}
	return (list);
}

int					main(int argc, char **argv)
{
	t_checker	*checker;

	if (argc == 1)
		return (-1);
	if (!(checker = ft_memalloc(sizeof(t_checker))))
		return (-1);
	if ((checker->stack_a = ft_list_push_params_stack(argc, argv)) == NULL)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	ft_checker(checker);
	return (0);
}
