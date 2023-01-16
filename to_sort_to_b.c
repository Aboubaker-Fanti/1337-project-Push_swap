/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sort_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:21:57 by afanti            #+#    #+#             */
/*   Updated: 2023/01/15 19:42:12 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortrbaalowal(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[1000];
	int	d;
	int	f;

	f = 0;
	i = i / 4;
	d = 0;
	while (i >= d)
	{
		start[d] = aray[d];
		d++;
	}
	d = 0;
	while (d < i)
	{
		f = returnhow(start, stack_a, i);
		test(stack_a, stack_b, f, i);
		d++;
	}
	sortnaslokhar(aray, i, stack_a, stack_b);
}

void	sortnaslokhar(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[1000];
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
	sortma9ablalakhir(aray, i, stack_a, stack_b);
}

void	sortma9ablalakhir(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[1000];
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
	sortma(aray, i, stack_a, stack_b);
}

void	sortma(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[1000];
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
	sortlakhir(aray, i, stack_a, stack_b);
}

void	sortlakhir(int *aray, int i, t_list **stack_a, t_list **stack_b)
{
	int	start[1000];
	int	d;
	int	t;
	int	f;
	int	k;

	d = 0;
	t = 0;
	k = 0;
	while (aray[k])
		k++;
	while (t < k)
	{
		start[d] = aray[t + (i * 4)];
		t++;
		d++;
	}
	d = 0;
	while (d < t)
	{
		f = returnhow(start, stack_a, t);
		test(stack_a, stack_b, f, t);
		d++;
	}
}
