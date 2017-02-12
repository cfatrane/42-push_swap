/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:31:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 16:51:09 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	define_med(t_push_swap *env, int *tab, size_t i)
{
	if (env->size_a >= 50 && env->size_a <= 250)
	{
		env->med = tab[i / 5];
		env->pad = env->size_a / 5;
	}
	else if (env->size_a > 250 && env->size_a < 500)
	{
		env->med = tab[i / 5];
		env->pad = env->size_a / 5;
	}
	else if (env->size_a >= 500 && env->size_a <= 10000)
	{
		env->med = tab[i / 10];
		env->pad = env->size_a / 10;
	}
}

void	convert_tab(t_push_swap *env)
{
	t_stack	*tmp;
	int		*tab;
	size_t	i;

	tab = (int*)malloc(sizeof(tab) * (env->size_a));
	i = 0;
	tmp = env->stack_a;
	while (tmp)
	{
		tab[i] = tmp->nbr;
		i++;
		tmp = tmp->next;
	}
	tri_rapide(tab, env->size_a);
	i = 0;
	while (i < env->size_a)
		i++;
	define_med(env, tab, i);
}

void	tri_rapide(int *tab, int taille)
{
	int	mur;
	int	courant;
	int	pivot;
	int	tmp;

	mur = 0;
	courant = 0;
	if (taille < 2)
		return ;
	pivot = tab[taille - 1];
	while (courant < taille)
	{
		if (tab[courant] <= pivot)
		{
			if (mur != courant)
			{
				tmp = tab[courant];
				tab[courant] = tab[mur];
				tab[mur] = tmp;
			}
			mur++;
		}
		courant++;
	}
	tri_rapide(tab, mur - 1);
	tri_rapide(tab + mur - 1, taille - mur + 1);
}
