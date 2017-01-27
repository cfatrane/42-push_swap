/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_convert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 16:55:07 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/27 20:33:38 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_checker_convert(t_checker *checker)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	if (!(checker->stack_a = ft_tabnew(checker->argc - 1)))
		return (-1);
	while (checker->argum[i])
	{
		checker->stack_a[i] = ft_atoi(checker->argum[i]);
		i++;
	}
	checker->stack_a[i] = '\0';
	return (0);
}
