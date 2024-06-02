/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:41:12 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 17:32:11 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac,char *av[])
{
    (void)ac;
    t_list *temp = malloc(sizeof(t_list));
    temp = ft_lstnew(temp->content);
        
    int i = 2;
    // t_list *list = temp;
    while (av[i]) 
    {
        ft_lstadd_back(&temp, ft_lstnew(ft_atoi(av[i])));
        i++;
    }
    t_list *lis = find_lis(temp);
    while (lis) 
    {
        printf("%d\n",lis->content);
        lis = lis->next;
    }
}
