/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:59:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 15:16:18 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	t_checker	*checker;

	i = 1;
	j = 0;
	if (argc == 1)
		return (-1);
	checker = ft_memalloc(sizeof(t_checker));
	checker->argc = argc;
	if (!(checker->argum = ft_strnew_two(1, argc)))
		return (-1);
	while (i < argc)
	{
		checker->argum[j] = ft_strdup(argv[i]);
		//	if (checker->argum[j] == '\0')
		//		return (-1);
		i++;
		j++;
	}
	checker->argum[j] = NULL;
	if (ft_checker_error(checker) == -1)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	ft_checker(checker);
	return (0);
}
