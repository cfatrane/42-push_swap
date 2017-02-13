/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   todelete.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 10:43:23 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 10:43:40 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_stack_at(t_stack *begin_list, size_t nbr)
{
	if (begin_list == NULL)
		return (NULL);
	if (nbr == 1 && begin_list->next == NULL)
		return (NULL);
	if (nbr == 0)
		return (begin_list);
	else
		return (ft_stack_at(begin_list->next, nbr - 1));
}

ssize_t	ft_stack_val_at(t_stack *begin_list, size_t nbr)
{
	if (begin_list == NULL)
		return (-1);
	if (nbr == 1 && begin_list->next == NULL)
		return (-1);
	if (nbr == 0)
		return (begin_list->nbr);
	else
		return (ft_stack_val_at(begin_list->next, nbr - 1));
}
