/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for100numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:23:02 by afanti            #+#    #+#             */
/*   Updated: 2023/01/09 16:13:56 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*this function to sort aray by swaping*/
void	sortaray(int *aray, int y)
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
			if (aray[i] > aray[c])
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

int	returnhow(int *aray, t_list **stack_a, int k)
{
	t_list	*stack;
	int		i;
	int		j;

	stack = *stack_a;
	j = 1;
	while (stack != NULL)
	{
		i = 0;
		while (i < k)
		{
			if (stack->content == aray[i])
			{
				return (j);
			}
			i++;
		}
		j++;
		stack = stack->next;
	}
	return (0);
}

/*here is the function ofrt 100 numbers*/
void	sort100numbers(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		aray[1000];
	t_list	*dest;

	i = 0;
	dest = *stack_a;
	while (dest != NULL)
	{
		aray[i++] = dest->content;
		dest = dest->next;
	}
	sortaray(aray, i);
	sortrbaalowal(aray, i, stack_a, stack_b);
}
/*here to find the numbers and push it to stack_b*/

void	test(t_list **stack_a, t_list **stack_b, int position, int i)
{
	int	h;

	h = 1;
	if (position > (i * 4) / 2)
	{
		position = ((i * 4) + 1) - position;
		while (position >= h)
		{
			rra(stack_a);
			h++;
		}
		pb(stack_a, stack_b);
	}
	else if (position == 1)
		pb(stack_a, stack_b);
	else
	{
		position = position - 1;
		while (position >= h)
		{
			ra(stack_a);
			h++;
		}
		pb(stack_a, stack_b);
	}
}
