/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:59:43 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 16:31:32 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	int		content;
	void	*next;
	int		index;
	int		move;
}			t_list;

//ft_atoi
int	test(int d);
int	ft_atoi(const char *str);


//lis_info
int			ft_lstsize(t_list *lst);
void		check_lis1(t_list *stack, int *d, int *p, int *sta);
int			check_lis2(int *d, int n, int i);
int max(int a,int b);

//lis.c
int			*arr1(t_list *stack);
int			*arr2(t_list *stack);
int			*stack_to_arr(t_list *stack);
t_list		*find_lis(t_list *stack);

//moves.c
int	index_of_node(t_list *head, int content);
int	number_of_moves(t_list *head, int content);

//push_to_a.c
void		push_to_a(t_list **head1, t_list **head2);

//push_to_b.c
void		push_to_b(t_list **head_a, t_list **head_b);

//retate_a.c
void		retate_a(t_list **head);

//retate_ab.c
void		retate_ab(t_list *head1, t_list *head2);

//retate_b.c
void		retate_b(t_list **head);

//retate_revers_a.c
void		retate_revers_a(t_list **head1);

//retate_revers_ab.c
void	retate_revers_ab(t_list *head1, t_list *head2);

//retate_revers_b.c
void		retate_revers_b(t_list **head2);

//small.c
t_list		*find_the_smaller_number(t_list *head);
int			index_small(t_list *head);

//stack_info.c
int			lent_of_stack(t_list *head);
int			find_the_middel_of_stack(t_list *head);
t_list		*element_in_middel(t_list *head);
void	ft_lstadd_back(t_list **lst, t_list *neew);

//swap_value_in_a
void		swap_value_in_a(t_list *head);

//swap_value_in_ab
void		swap_value_in_ab(t_list *head1, t_list *head2);

//swap_value_in_a
void		swap_value_in_b(t_list *head);

//utils.c
t_list		*get_the_last(t_list *head);
t_list		*get_the_befor_last(t_list *head);
t_list		*ft_lstnew(int content);
void		ft_lstadd_front(t_list **lst, t_list *neew);

#endif
