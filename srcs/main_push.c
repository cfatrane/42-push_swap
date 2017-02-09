/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:55:35 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/09 18:58:46 by cfatrane         ###   ########.fr       */
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

t_stack	*ft_stack_push_params(int ac, char **av, t_push_swap *env)
{
	ssize_t		i;
	t_stack		*stack;

	stack = NULL;
	i = 1;
	if (ac)
	{
		if (ft_strcmp(av[i], "-v") == 0)
		{
			env->display = 1;
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
	t_push_swap *env;

	if (argc == 1)
		return (-1);
	if (!(env = ft_memalloc(sizeof(t_push_swap))))
		return (-1);
	if ((env->stack_a = ft_stack_push_params(argc, argv, env)) == NULL)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	t_stack	*tmp;
	int		*tableau;
	int		i;

	tableau = (int*)malloc(sizeof(tableau) * (argc - 1));
	i = 0;
	tmp = env->stack_a;
//	ft_printf("LISTE = \n");
	while (tmp)
	{
//		ft_printf("%d ", tmp->nbr);
		tableau[i] = tmp->nbr;
		i++;
		tmp = tmp->next;
	}
//	ft_printf("\nTABLEAU = \n");
	i = 0;
	while (i < argc - 1)
	{
//		ft_printf("%d ", tableau[i]);
		i++;
	}
	tri_rapide(tableau, argc - 1);
//	tri_fusion(tableau, argc - 1);
//	quickSort(tableau, 0, argc -1);
	i = 0;
//	ft_printf("\nTRI = \n");
	while (i < argc - 1)
	{
//		ft_printf("%d ", tableau[i]);
		i++;
	}
	int middle = (argc - 1) / 2;
	env->med = tableau[middle];
//	ft_printf("\n MEDIANE = %d ", env->med);

	env->action = 1;
	push_swap(env);
	return (0);
}
