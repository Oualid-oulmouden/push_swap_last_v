/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:44:06 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/05/25 09:51:43 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	retate_a(t_list **head)
{
	t_list	*temp;
	t_list	*var;

	temp = *head;
	(*head) = (*head)->next;
	var = get_the_last(*head);
	temp->next = NULL;
	var->next = temp;
}
