/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 10:41:51 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 10:49:34 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_push_swap	*env;

	if (argc == 1)
		return (-1);
	if (!(env = ft_memalloc(sizeof(t_push_swap))))
		return (-1);
	if ((env->stack_a = ft_stack_push_params(argc, argv, env)) == NULL)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	checker(env);
	ft_stack_clear(&env->stack_a);
	free(env);
	return (0);
}
