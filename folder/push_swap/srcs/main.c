/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:55:35 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/03 20:16:07 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_create_elem_stack(ssize_t nbr)
{
	t_stack	*stack;

	if (!(stack = (t_stack*)malloc(sizeof(*stack))))
		return (NULL);
	stack->nbr = nbr;
	stack->next = NULL;
	return (stack);
}

t_stack	*ft_stack_push_params(int ac, char **av, t_push_swap *push_swap)
{
	ssize_t		i;
	t_stack		*stack;

	stack = NULL;
	i = 1;
	if (ac)
	{
		if (ft_strcmp(av[i], "-v") == 0)
		{
			push_swap->display = 1;
			i++;
		}
		while (i < ac)
		{
			if (ft_stack_format(av[i]) == -1 ||
					ft_stack_max(ft_atoll(av[i])) == -1)
				return (NULL);
			ft_stack_push_back(&stack, ft_atoll(av[i]));
			i++;
		}
	}
	if (ft_stack_doublon(stack) == -1)
		return (NULL);
	return (stack);
}

int		main(int argc, char **argv)
{
	t_push_swap	*push_swap;

	if (argc == 1)
		return (-1);
	if (!(push_swap = ft_memalloc(sizeof(t_push_swap))))
		return (-1);
	if ((push_swap->stack_a = ft_stack_push_params(argc, argv, push_swap)) == NULL)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	ft_push_swap(push_swap);
	return (0);
}
