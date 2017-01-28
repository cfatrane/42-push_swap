/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 15:23:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_rotate_a(t_checker *checker)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = checker->stack_a[0];
	checker->stack_a[0] = checker->stack_a[1];
	checker->stack_a[1] = tmp;
	while (checker->stack_a[i])
	{
		printf("Nbr vaut %d a i vaut %d apres swap a\n", checker->stack_a[i], i);
		i++;
	}
	ft_putendl(RA);
	return (0);
}

int	ft_rotate_b(t_checker *checker)
{
	ft_putendl(RB);
	return (0);
}

int	ft_rotate_r(t_checker *checker)
{
	ft_putendl(RR);
	return (0);
}
