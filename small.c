/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:25:36 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 08:25:37 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>
#include <stdio.h>

t_list	*find_the_smaller_number(t_list *head)
{
	t_list	*prv;

	prv = malloc(sizeof(t_list));
	prv->index = 0;
	prv->content = INT_MAX;
	while (head != NULL)
	{
		if (head->content <= prv->content)
		{
			prv->content = head->content;
			prv->index++;
		}
		head = head->next;
	}
	return (prv);
}

int	index_small(t_list *head)
{
	t_list	*prv;

	prv = malloc(sizeof(t_list));
	prv->index = 0;
	prv->content = INT_MAX;
	while (head != NULL)
	{
		if (head->content <= prv->content)
		{
			prv->content = head->content;
			prv->index++;
		}
		head = head->next;
	}
	return (prv->index);
}
