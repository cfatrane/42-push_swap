/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:59:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 19:35:20 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	main(int argc, char **argv)
{
	t_checker *checker;

	checker = ft_memalloc(sizeof(t_checker));
	checker->stack_a = ft_strnew(argc - 1);
	char	*line;

	int i = 1;
	int j = 0;

	while (i < argc)
	{
		if (ft_checker_format(argv[i]) == -1)
		{
			ft_putendl_fd("Error", 2);
			return (-1);
		}
		i++;
	}
	i = 1;
	printf("argc = %d\n", argc);
	while (i < argc)
	{
		//checker->stack_a[j] = ft_strdup(argv[i]);
		checker->stack_a[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("valeur dans la case %d est de %d\n", i, checker->stack_a[i]);
		i++;
	}
	while (get_next_line(0, &line))
	{
		if (ft_strcmp(line, "") == 0)
			exit (0);
	}
	return (0);
}
