/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:42:41 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/03 10:59:06 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int partitionner(tableau T, entier premier, entier dernier, entier pivot)
{
	échanger T[pivot] et T[dernier]  // échange le pivot avec le dernier du tableau , le pivot devient le dernier du tableau
	j := premier
	pour i de premier à dernier - 1 // la boucle se termine quand i = (dernier-1).
	si T[i] <= T[dernier] alors
	échanger T[i] et T[j]
	j := j + 1
	échanger T[dernier] et T[j]
	renvoyer j
}

void	tri_rapide(tableau T, int premier, int dernier)
{
	int pivot;
	if(premier < dernier)

	pivot := choix_pivot(T, premier, dernier)
	pivot := partitionner(T, premier, dernier, pivot)
	tri_rapide(T, premier, pivot-1)
tri_rapide(T, pivot+1, dernier)
	fin si
}
