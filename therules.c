/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   therules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 19:01:38 by afanti            #+#    #+#             */
/*   Updated: 2023/01/08 13:14:07 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*dest;
	t_list	*current;

	dest = *stack_a;
	while (dest->next->next != NULL)
	{
		dest = dest->next;
	}	
	current = dest->next;
	dest->next = NULL;
	current->next = *stack_a;
	*stack_a = current;
	write (1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	t_list	*dest;
	t_list	*current;

	dest = *stack_b;
	while (dest->next->next != NULL)
	{
		dest = dest->next;
	}
	current = dest->next;
	dest->next = NULL;
	current->next = *stack_b;
	*stack_b = current;
	write (1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write (1, "rrr\n", 4);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*dest;

	if (*stack_b == NULL)
		return ;
	dest = *stack_b;
	*stack_b = (*stack_b)->next;
	dest->next = *stack_a;
	*stack_a = dest;
	write (1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_a == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
	write (1, "pb\n", 3);
}
