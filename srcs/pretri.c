/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:31:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/09 15:59:11 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	tri_rapide(int *tableau, int taille)
{
	int	mur;
	int	courant;
	int	pivot;
	int	tmp;
	if (taille < 2)
		return;
	//	On prend comme pivot l element le plus a droite
	pivot = tableau[taille - 1];
	mur  = courant = 0;
	while (courant<taille)
	{
		if (tableau[courant] <= pivot)
		{
			if (mur != courant)
			{
				tmp = tableau[courant];
				tableau[courant] = tableau[mur];
				tableau[mur] = tmp;
			}
			mur ++;
		}
		courant ++;
	}
	tri_rapide(tableau, mur - 1);
	tri_rapide(tableau + mur - 1, taille - mur + 1);
}
/*
   void	fusion (int *a, int n, int m) 
   {
   int i, j, k;
   int *x = malloc(n * sizeof (int));
   for (i = 0, j = m, k = 0; k < n; k++) 
   {
   x[k] = j == n ? a[i++] : i == m      ? a[j++] : a[j] < a[i] ? a[j++] : a[i++];
   }
   for (i = 0; i < n; i++) {
   a[i] = x[i];
   }
   free(x);
   }

   void	tri_fusion (int *liste, int taille) 
   {
   if (taille < 2) return;
   int milieu = taille / 2;
   tri_fusion(liste, milieu);
   tri_fusion(liste milieu, taille - milieu);
   fusion(liste, taille, milieu);
   }*/

/*
void	echanger(int tableau[], int a, int b)
{
	int temp = tableau[a];
	tableau[a] = tableau[b];
	tableau[b] = temp;
}

void	quickSort(int tableau[], int debut, int fin)
{
	int gauche = debut-1;
	int droite = fin+1;
	const int pivot = tableau[debut];

	 Si le tableau est de longueur nulle, il n'y a rien à faire. 
	if(debut >= fin)
		return;

	 Sinon, on parcourt le tableau, une fois de droite à gauche, et une
	 *        autre de gauche à droite, à la recherche d'éléments mal placés,
	 *               que l'on permute. Si les deux parcours se croisent, on arrête. 
	while(1)
	{
		do droite--; while(tableau[droite] > pivot);
		do gauche++; while(tableau[gauche] < pivot);

		if(gauche < droite)
			echanger(tableau, gauche, droite);
		else break;
	}

	 Maintenant, tous les éléments inférieurs au pivot sont avant ceux
	 *        supérieurs au pivot. On a donc deux groupes de cases à trier. On utilise
	 *               pour cela... la méthode quickSort elle-même ! 
	quickSort(tableau, debut, droite);
	quickSort(tableau, droite+1, fin);
}
*/
