/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:31:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 09:41:27 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	define_med(t_push_swap *env, int *tab)
{
	int dif;

	if (env->size_a >= 50 && env->size_a <= 250)
	{
		dif = 5;
		env->med = tab[env->size_a / dif];
		env->pad = env->size_a / dif;
	}
	else if (env->size_a > 250 && env->size_a < 500)
	{
		env->med = tab[env->size_a / 2];
		env->pad = env->size_a / 2;
	}
	else if (env->size_a >= 500 && env->size_a <= 10000)
	{
		env->med = tab[env->size_a / 10];
		env->pad = env->size_a / 10;
	}
}

int		*convert_tab(t_push_swap *env)
{
	t_stack	*tmp;
	int		*tab;
	size_t	i;

	if (!(tab = ft_tabnew(env->size_a)))
		return (NULL);
	i = 0;
	tmp = env->stack_a;
	while (tmp)
	{
		tab[i] = tmp->nbr;
		i++;
		tmp = tmp->next;
	}
	return (tab);
}

void	tri_rapide(int *tab, int taille)
{
	int	mur;
	int	courant;
	int	pivot;
	int	tmp;

	mur = 0;
	courant = -1;
	if (taille < 2)
		return ;
	pivot = tab[taille - 1];
	while (++courant < taille)
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
	}
	tri_rapide(tab, mur - 1);
	tri_rapide(tab + mur - 1, taille - mur + 1);
}
