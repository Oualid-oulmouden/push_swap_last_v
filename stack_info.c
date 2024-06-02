/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:25:15 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 16:12:51 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	lent_of_stack(t_list *head)
{
	int	lent;

	lent = 0;
	while (head != NULL)
	{
		head = head->next;
		lent++;
	}
	return (lent);
}

int	find_the_middel_of_stack(t_list *head)
{
	head->index = 0;
	while (head != NULL)
	{
		if (head->index == (lent_of_stack(head) - 1) / 2)
			return (head->index);
		head->index++;
	}
	return (0);
}

t_list	*element_in_middel(t_list *head)
{
	head->index = 0;
	while (head != NULL)
	{
		if (head->index == (lent_of_stack(head) - 1) / 2)
			return (head);
		head = head->next;
		head->index++;
	}
	return (0);
}
void	ft_lstadd_back(t_list **lst, t_list *neew)
{
	t_list	*ls;

	if (!lst || !neew)
		return ;
	ls = *lst;
	if (*lst == NULL)
	{
		*lst = neew;
		return ;
	}
	while (ls->next)
		ls = ls->next;
	ls->next = neew;
}