#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    t_list *node1 = ft_lstnew(0);
    t_list *node2 = ft_lstnew(4);
    t_list *node3 = ft_lstnew(6);
    t_list *node4 = ft_lstnew(1);
    t_list *node5 = ft_lstnew(2);
    t_list *node6 = ft_lstnew(10);
    t_list *node7 = ft_lstnew(7);
    t_list *node8 = ft_lstnew(3);
    t_list *node9 = ft_lstnew(8);
    t_list *node10 = ft_lstnew(9);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;
    node10->next = NULL;

   t_list *lis = find_lis(node1);
    while (lis) 
    {
        printf("%d\n",lis->content);
        lis = lis->next;
    }
}