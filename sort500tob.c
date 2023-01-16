/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500tob.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:39:33 by afanti            #+#    #+#             */
/*   Updated: 2023/01/09 17:20:51 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortob5001(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	arayy[10000];
	int	g;
	int	j;

	i = i / 8;
	g = 0;
	j = 0;
	while (i >= g)
	{
		arayy[g] = aray[g];
		g++;
	}
	g = 0;
	while (g > i)
	{
		j = returnhow(arayy, stack_a, i);
		test(stack_a, stack_b, j, i);
		g++;
	}
	sortob5002(aray, i, stack_a, stack_b);
}

void	sortob5002(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 2;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + i];
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
	sortob5003(aray, i, stack_a, stack_b);
}

void	sortob5003(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 3;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + (i * 2)];
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
	sortob5004(aray, i, stack_a, stack_b);
}

void	sortob5004(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 4;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + (i * 3)];
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
	sortob5005(aray, i, stack_a, stack_b);
}

void	sortob5005(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[10000];
	int	d;
	int	t;
	int	g;
	int	f;

	g = i * 5;
	d = 0;
	t = 0;
	while (t <= g)
	{
		start[d] = aray[t + (i * 4)];
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
	sortob5006(aray, i, stack_a, stack_b);
}
