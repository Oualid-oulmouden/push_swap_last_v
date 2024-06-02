/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:18:09 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 17:26:05 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	*arr1(t_list *stack)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * ft_lstsize(stack));
	i = 0;
	while (i < ft_lstsize(stack))
	{
		arr[i] = 1;
		i++;
	}
	return (arr);
}

int	*arr2(t_list *stack)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * ft_lstsize(stack));
	i = 0;
	while (i < ft_lstsize(stack))
	{
		arr[i] = -1;
		i++;
	}
	return (arr);
}

int	*stack_to_arr(t_list *stack)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * ft_lstsize(stack));
	i = 0;
	while (stack)
	{
		arr[i] = stack->content;
		i++;
		stack = stack->next;
	}
	return (arr);
}

t_list	*find_lis(t_list *stack)
{
	int		n;
	int		*d;
	int		*p;
	int		*sta;
	int		i;
	int		pos;
	t_list	*sub;

	sta = stack_to_arr(stack);
	n = ft_lstsize(stack);
	d = arr1(stack);
	p = arr2(stack);
	i = 0;
	check_lis1(stack, d, p, sta);
	pos = check_lis2(d, n, i);
	sub = NULL;
	while (pos != -1)
	{
		ft_lstadd_front(&sub, ft_lstnew(sta[pos]));
		pos = p[pos];
	}
	return (sub);
}