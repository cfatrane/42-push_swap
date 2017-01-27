/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:59:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/27 14:47:02 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	char		*line;
	t_checker	*checker;

	i = 1;
	j = 0;
	checker = ft_memalloc(sizeof(t_checker));
	if (!(checker->argum = ft_strnew_two(argc - 1, 1)))
		return (-1);
//	if (!(checker->argum = ((char**)malloc(sizeof(*checker->argum) * (argc + 1)))))
//		return (-1);
	while (i < argc)
	{
		checker->argum[j] = ft_strdup(argv[i]);
		//	if (checker->argum[j] == '\0')
		//		return (-1);
		i++;
		j++;
	}
	checker->argum[j] = NULL;
	if (ft_checker_format(checker) == -1)
	{
		ft_putendl_fd("Error", 2);
		return (-1);
	}
	while (get_next_line(0, &line))
	{
		if (ft_strcmp(line, "") == 0)
			exit(0);
	}
	return (0);
}
