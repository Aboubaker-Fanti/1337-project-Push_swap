/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:07:46 by afanti            #+#    #+#             */
/*   Updated: 2023/01/09 17:16:57 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortsort(int *aray, int y)
{
	int	i;
	int	c;
	int	s;

	i = 0;
	while (i < y)
	{
		c = i + 1;
		while (c < y)
		{
			if (aray[i] < aray[c])
			{
				s = aray[i];
				aray[i] = aray[c];
				aray[c] = s;
			}
			c++;
		}
		i++;
	}
}

void	sortit(t_list **stack_a, t_list **stack_b)
{
	int		aray[1000];
	int		i;
	int		a;
	t_list	*stack;

	a = 0;
	i = 0;
	stack = *stack_b;
	while (stack != NULL)
	{
		aray[i++] = stack->content;
		stack = stack->next;
	}
	sortsort(aray, i);
	takmile(stack_a, stack_b, aray, i);
}

void	takmile(t_list **stack_a, t_list **stack_b, int *aray, int i)
{
	int	d;
	int	g;
	int	a;
	int	y;

	a = 0;
	d = 0;
	g = i;
	while (a < g)
	{
		y = returnwhere(aray, stack_b, d);
		lasttest(stack_a, stack_b, y, i);
		i--;
		d++;
		a++;
	}
}

int	returnwhere(int *aray, t_list **stack_b, int d)
{
	t_list	*stack;
	int		j;
	int		k;

	k = 1;
	j = 0;
	stack = *stack_b;
	while (stack != NULL)
	{
		if (stack->content == aray[j + d])
		{
			return (k);
		}
		k++;
		stack = stack->next;
	}
	return (0);
}

void	lasttest(t_list **stack_a, t_list **stack_b, int n, int i)
{
	int	h;

	h = 1;
	if (n > (i / 2) && (i / 2) != 0)
	{
		n = (i + 1) - n;
		while (n >= h)
		{
			rrb(stack_b);
			h++;
		}
		pa(stack_a, stack_b);
	}
	else if (n == 1)
		pa(stack_a, stack_b);
	else
	{
		n = n - 1;
		while (n >= h)
		{
			rb(stack_b);
			h++;
		}
		pa(stack_a, stack_b);
	}
}
