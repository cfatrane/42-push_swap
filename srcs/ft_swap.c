/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:53:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 18:01:58 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_swap_a(t_checker *checker)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = checker->stack_a[0];
	checker->stack_a[0] = checker->stack_a[1];
	checker->stack_a[1] = tmp;
	ft_putstr("Statk a = ");
	while (checker->stack_a[i])
	{
		ft_putnbr(checker->stack_a[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	//	ft_putendl(SA);
	return (0);
}

int	ft_swap_b(t_checker *checker)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = checker->stack_b[0];
	checker->stack_b[0] = checker->stack_b[1];
	checker->stack_b[1] = tmp;
	while (checker->stack_b[i])
	{
		ft_putstr("Statk b =");
		ft_putnbr(checker->stack_b[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	//	ft_putendl(SB);
	return (0);
}

int	ft_swap_s(t_checker *checker)
{
	ft_swap_a(checker);
	ft_swap_b(checker);
	//	ft_putendl(SS);
	return (0);
}
