/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addlencheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:40:36 by afanti            #+#    #+#             */
/*   Updated: 2023/01/07 22:44:14 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add_node(long content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	head->content = content;
	head->next = NULL;
	return (head);
}

int	length(t_list *stack)
{
	int	len;

	len = 0;
	while (stack != NULL)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}

int	check_if_sorted(t_list *stack)
{
	t_list	*current;

	current = stack;
	while (current->next != NULL)
	{
		if (current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

void	ft_lstaddd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}

void	swap_a(t_list *head)
{
	int	start;

	if (head == NULL)
		return ;
	start = head->content;
	head->content = head->next->content;
	head->next->content = start;
	write (1, "sa\n", 3);
}
