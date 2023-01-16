/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500tob2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:23:32 by afanti            #+#    #+#             */
/*   Updated: 2023/01/09 17:23:43 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortob5006(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 6;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + (i * 5)];
		t++;
		d++;
	}
	d = 0;
	while (d < i)
	{
		f = returnhow(start, stack_a, i);
		test(stack_a, stack_b, f, i);
		d++;
	}
	sortob5007(aray, i, stack_a, stack_b);
}

void	sortob5007(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 7;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + (i * 6)];
		t++;
		d++;
	}
	d = 0;
	while (d < i)
	{
		f = returnhow(start, stack_a, i);
		test(stack_a, stack_b, f, i);
		d++;
	}
	sortob5008(aray, i, stack_a, stack_b);
}

void	sortob5008(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 8;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + (i * 7)];
		t++;
		d++;
	}
	d = 0;
	while (d < i)
	{
		f = returnhow(start, stack_a, i);
		test(stack_a, stack_b, f, i);
		d++;
	}
	sortob5009(aray, i, stack_a, stack_b);
}

void	sortob5009(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 9;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + (i * 8)];
		t++;
		d++;
	}
	d = 0;
	while (d < i)
	{
		f = returnhow(start, stack_a, i);
		test(stack_a, stack_b, f, i);
		d++;
	}
	sortob5000(aray, i, stack_a, stack_b);
}

void	sortob5000(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 10;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + (i * 9)];
		t++;
		d++;
	}
	d = 0;
	while (d < i)
	{
		f = returnhow(start, stack_a, i);
		test(stack_a, stack_b, f, i);
		d++;
	}
}
