/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 19:44:20 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/03 19:20:37 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"









	fonction trier(p, n)
Q := n/2 (division entière)
	P := n-Q
	si P >= 2
q := trier(p, P)
	si Q >= 2 
trier(q, Q)
	sinon
	q := p.suivant
	fin
q := fusionner(p, P, q, Q)
	renvoyer q
	fin

fonction fusionner(p, P, q, Q)
	pour i allant de 0 à taille(p)-1 faire
si valeur(p.suivant) > valeur(q.suivant) 
	déplacer le maillon q.suivant après le maillon p
	si Q = 1 quitter la boucle
	Q := Q-1
	sinon
	si P = 1
	tant que Q >= 1
	q := q.suivant
	Q := Q-1
	fin
	quitter la boucle
	fin
	P := P-1
	fin
	p := p.suivant
	fin
	renvoyer q
	fin
