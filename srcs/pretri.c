/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:31:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/17 19:17:13 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	define_med_min(t_push_swap *env, int *tab)
{
	if (env->size_a <= 30)
	{
		env->med = tab[1];
		env->pad = env->size_a / 1;
	}
	else if (env->size_a > 30 && env->size_a <= 300)
	{
		env->quart_one = tab[env->size_a / 4];
		env->med = tab[env->size_a / 2];
		env->quart_three = tab[3 * env->size_a / 4];
		env->pad = env->size_a / 2;
	}
}

void	define_med_max(t_push_swap *env, int *tab)
{
	if (env->size_a > 300)
	{
		env->med = tab[env->size_a / 10];
		env->pad = env->size_a / 10;
	}
	else if (env->size_a > 800 && env->size_a <= 1000)
	{
		env->med = tab[env->size_a / 20];
		env->pad = env->size_a / 20;
	}
	else if (env->size_a > 1000 && env->size_a <= 5000)
	{
		env->med = tab[env->size_a / 100];
		env->pad = env->size_a / 100;
	}
	else if (env->size_a > 5000)
	{
		env->med = tab[env->size_a / 200];
		env->pad = env->size_a / 200;
	}
}

void	define_med(t_push_swap *env, int *tab)
{
	if (env->size_a <= 300)
		define_med_min(env, tab);
	else
		define_med_max(env, tab);
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
