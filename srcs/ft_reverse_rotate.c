/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 15:21:31 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 13:58:05 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_reverse_rotate_a(t_checker *checker)
{
	ft_putendl(RA);
	return (0);
}

int	ft_reverse_rotate_b(t_checker *checker)
{
	ft_putendl(RB);
	return (0);
}

int	ft_reverse_rotate_r(t_checker *checker)
{
	ft_reverse_rotate_a(checker);
	ft_reverse_rotate_b(checker);
	ft_putendl(RR);
	return (0);
}
