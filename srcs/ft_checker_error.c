/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 16:54:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/27 20:26:27 by cfatrane         ###   ########.fr       */
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

int	ft_checker_max(t_checker *checker)
{
	int	i;

	i = 0;
	while (checker->argum[i])
	{
		if (ft_atoll(checker->argum[i]) > INT_MAX)
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int	ft_checker_error(t_checker *checker)
{
	if (ft_checker_format(checker) == -1 || ft_checker_doublon(checker) == -1 || ft_checker_max(checker) == -1)
		return (-1);
	return (0);
}
