/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 09:30:16 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 11:07:55 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_list	*get_the_last(t_list *head)
{
	while (head && head->next != NULL)
		head = head->next;
	return (head);
}

t_list	*get_the_befor_last(t_list *head)
{
	t_list	*temp;
	t_list	*prv;

	temp = head;
	while (temp->next)
	{
		prv = temp;
		temp = temp->next;
	}
	return (prv);
}

t_list	*ft_lstnew(int content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->next = NULL;
	head->content = content;
	return (head);
}

void	ft_lstadd_front(t_list **lst, t_list *neew)
{
	if (!neew || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = neew;
		return ;
	}
	if (*lst)
	{
		neew->next = *lst;
		*lst = neew;
	}
}
