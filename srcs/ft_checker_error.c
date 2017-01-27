/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 16:54:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/27 19:26:04 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_checker_format(t_checker *checker)
{
	int	i;
	int	j;

	i = 0;
	while (checker->argum[i])
	{
		j = 0;
		while (checker->argum[i][j])
		{
			if (!ft_isdigit(checker->argum[i][j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_checker_doublon(t_checker *checker)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (checker->argum[i])
	{
		j = i + 1;
		tmp = checker->argum[i];
		while (checker->argum[j])
		{
			if (ft_strcmp(tmp, checker->argum[j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
