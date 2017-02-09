/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   untitled.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:34:00 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/09 15:52:05 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void echanger(int tab[], int i, int j)
{
	int memoire;
	memoire=tab[i];
	tab[i]=tab[j];
	tab[j]=memoire;
}


void fusion(int tableau[],int deb1,int fin1,int fin2)
{
	int *table1;
	int deb2=fin1+1;
	int compt1=deb1;
	int compt2=deb2;
	int i;

	table1=malloc((fin1-deb1+1)*sizeof(int));

	//on recopie les éléments du début du tableau
	for(i=deb1;i<=fin1;i++)
	{
		table1[i-deb1]=tableau[i];
	}

	for(i=deb1;i<=fin2;i++)
	{        
		if (compt1==deb2) //c'est que tous les éléments du premier tableau ont été utilisés
		{
			break; //tous les éléments ont donc été classés
		}
		else if (compt2==(fin2+1)) //c'est que tous les éléments du second tableau ont été utilisés
		{
			tableau[i]=table1[compt1-deb1]; //on ajoute les éléments restants du premier tableau
			compt1++;
		}
		else if (table1[compt1-deb1]<tableau[compt2])
		{
			tableau[i]=table1[compt1-deb1]; //on ajoute un élément du premier tableau
			compt1++;
		}
		else
		{
			tableau[i]=tableau[compt2]; //on ajoute un élément du second tableau
			compt2++;
		}
	}
	free(table1);
}


void tri_fusion_bis(int tableau[],int deb,int fin)
{
	if (deb!=fin)
	{
		int milieu=(fin+deb)/2;
		tri_fusion_bis(tableau,deb,milieu);
		tri_fusion_bis(tableau,milieu+1,fin);
		fusion(tableau,deb,milieu,fin);
	}
}

void tri_fusion(int tableau[],int longueur)
{
	if (longueur>0)
	{
		tri_fusion_bis(tableau,0,longueur-1);
	}
}

void tri_selection(int tab[],int longueur)
{
	int maxi, i;

	while(longueur>0)
	{
		//on recherche la plus grande valeur du tableau non encore trie
		maxi = 0;

		for(i = 1; i < longueur ; i++)
		{
			if(tab[i]>tab[maxi]) 
				maxi=i;
		}

		//on echange le plus grand element avec le dernier
			echanger(tab, maxi, (longueur-1));

		//on traite le reste du tableau
		longueur--;
	}
}
