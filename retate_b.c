/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:18:42 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/05/25 09:33:07 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	retate_b(t_list **head)
{
	t_list	*temp;
	t_list	*var;

	temp = *head;
	(*head) = (*head)->next;
	var = get_the_last(*head);
	temp->next = NULL;
	var->next = temp;
}
