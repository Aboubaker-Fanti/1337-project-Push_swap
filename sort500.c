/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:33:37 by afanti            #+#    #+#             */
/*   Updated: 2023/01/13 18:05:12 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort500numbers(t_list **stack_a, t_list **stack_b)
{
	t_list	*dest;
	int		aray[10000];
	int		i;
	int		g;

	g = 0;
	i = 0;
	dest = *stack_a;
	while (dest != NULL)
	{
		aray[i++] = dest->content;
		dest = dest->next;
	}
	sortaray(aray, i);
	while (i > g)
	{
		g++;
	}
	g = 0;
	sortob5001(aray, i, stack_a, stack_b);
}
