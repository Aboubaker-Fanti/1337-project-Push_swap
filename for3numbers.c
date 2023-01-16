/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for3numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:08:32 by afanti            #+#    #+#             */
/*   Updated: 2023/01/16 20:33:31 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3number(t_list **stack)
{
	int	lowal;
	int	tani;
	int	talt;

	lowal = (*stack)->content;
	tani = (*stack)->next->content;
	talt = (*stack)->next->next->content;
	if (lowal > tani && tani < talt && lowal > talt)
		ra(stack);
	else if (lowal > tani && tani > talt && talt < lowal)
	{
		ra(stack);
		swap_a(*stack);
	}
	else if (lowal < tani && tani > talt && lowal > talt)
		rra(stack);
	else if (lowal > tani && tani < talt && lowal < talt)
		swap_a(*stack);
	else if (lowal < tani && tani > talt && lowal < talt)
	{
		rra(stack);
		swap_a(*stack);
	}
}

void	sort5numbers(t_list **stack_a, t_list **stack_b)
{
	int	tani;
	int	talt;

	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	sort3number(stack_a);
	tani = (*stack_a)->next->content;
	talt = (*stack_a)->next->next->content;
	sort5numberss(stack_a, stack_b, tani, talt);
}

void	sort5numberss(t_list **stack_a, t_list **stack_b, int tani, int talt)
{
	int	here_b;

	here_b = (*stack_b)->content;
	if ((*stack_a)->content > (*stack_b)->content)
	{
		pa(stack_a, stack_b);
	}
	else if ((*stack_b)->content > (*stack_a)->next->next->content)
	{
		pa(stack_a, stack_b);
		ra(stack_a);
	}
	else if (here_b > (*stack_a)->content && here_b > tani && here_b < talt)
	{
		rra(stack_a);
		pa(stack_a, stack_b);
		ra(stack_a);
		ra(stack_a);
	}
	else if (here_b > (*stack_a)->content && tani > here_b)
	{
		pa(stack_a, stack_b);
		swap_a(*stack_a);
	}
	for5numbers(stack_a, stack_b);
}

void	for5numbers(t_list **stack_a, t_list **stack_b)
{
	int	tani;
	int	talt;

	tani = (*stack_a)->next->next->content;
	talt = (*stack_a)->next->next->next->content;
	if ((*stack_b)->content > talt)
	{
		pa(stack_a, stack_b);
		ra(stack_a);
	}
	else if ((*stack_a)->content > (*stack_b)->content)
	{
		pa(stack_a, stack_b);
	}
	else
		for5numberss(stack_a, stack_b, tani, talt);
}

void	for5numberss(t_list **stack_a, t_list **stack_b, int tani, int talt)
{
	int	lawal;
	int	a;

	a = (*stack_a)->next->content;
	lawal = (*stack_b)->content;
	if (lawal > (*stack_a)->content && lawal < (*stack_a)->next->content)
	{
		pa(stack_a, stack_b);
		swap_a(*stack_a);
	}
	else if (lawal > (*stack_a)->content && lawal > a && lawal < tani)
	{
		ra(stack_a);
		pa(stack_a, stack_b);
		swap_a(*stack_a);
		rra(stack_a);
	}
	else if (talt > lawal && tani < lawal)
	{
		rra(stack_a);
		pa(stack_a, stack_b);
		ra(stack_a);
		ra(stack_a);
	}
}
