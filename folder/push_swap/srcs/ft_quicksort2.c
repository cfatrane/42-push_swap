/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 21:08:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/07 21:09:21 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_pivot_b(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_b;
	//	nbr_tmp = tmpstack->nbr;
	while (tmpstack/*->next*/)
	{
		nbr_tmp = tmpstack->nbr;
//		ft_printf("is pivot b nbr tmp = %d pivot = %d\n", nbr_tmp, push_swap->pivot);
		if (nbr_tmp == push_swap->pivot)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

int	is_pivot_a(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_a;
	//	nbr_tmp = tmpstack->nbr;
	while (tmpstack/*->next*/)
	{
		nbr_tmp = tmpstack->nbr;
//		ft_printf("is ivot a nbr tmp = %d pivot = %d\n", nbr_tmp, push_swap->pivot);
		if (nbr_tmp == push_swap->pivot)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

int		ft_tabdone_a(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_a;
	//	nbr_tmp = tmpstack->nbr;
	while (tmpstack/*->next*/)
	{
		nbr_tmp = tmpstack->nbr;
	//	ft_printf("nbr tmp = %d pivot = %d\n", nbr_tmp, push_swap->pivot);
		if (nbr_tmp > push_swap->pivot)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

int		ft_tabdone_b(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_b;
	//	nbr_tmp = tmpstack->nbr;
	while (tmpstack/*->next*/)
	{
		nbr_tmp = tmpstack->nbr;
		//		ft_printf("nbr tmp = %d pivot = %d\n", nbr_tmp, push_swap->pivot);
		if (nbr_tmp > push_swap->pivot)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}
