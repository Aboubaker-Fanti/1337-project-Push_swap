/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   therules1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:14:13 by afanti            #+#    #+#             */
/*   Updated: 2023/01/08 13:21:39 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list *head)
{
	int	dest;

	dest = head->content;
	head->content = head->next->content;
	head->next->content = dest;
	write (1, "sb\n", 3);
}

void	ss(t_list *head, t_list *stack_b)
{
	swap_a(head);
	sb(stack_b);
	write (1, "ss\n", 3);
}

void	ra(t_list **head)
{
	t_list	*stack_a;
	t_list	*current;

	if (*head == NULL)
		return ;
	stack_a = *head;
	*head = (*head)->next;
	stack_a->next = NULL;
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = stack_a;
	write (1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	t_list	*head;
	t_list	*current;

	if (*stack_b == NULL)
		return ;
	head = *stack_b;
	*stack_b = (*stack_b)->next;
	head->next = NULL;
	current = *stack_b;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = head;
	write (1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write (1, "rr\n", 3);
}
