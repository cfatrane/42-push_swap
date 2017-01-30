/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:59:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 15:27:39 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

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
