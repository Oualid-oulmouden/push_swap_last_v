/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:32:16 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 15:42:29 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
int max(int a,int b)
{
	if(a > b)
		return a;
	else
	 return b;
}
void	check_lis1(t_list *stack, int *d, int *p, int *sta)
{
	int	n;
	int	i;
	int	j;

	n = ft_lstsize(stack);
	i = 0;
	j = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			if (sta[j] < sta[i] && d[i] < d[j] + 1)
			{
				d[i] = d[j] + 1;
				p[i] = j;
			}
			d[i] = max(d[i], d[j]);
			j++;
		}
		i++;
	}
}

int	check_lis2(int *d, int n, int i)
{
	int	ans;
	int	pos;

	i = 0;
	ans = d[0];
	pos = 0;
	while (i < n)
	{
		if (d[i] > ans)
		{
			ans = d[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}
