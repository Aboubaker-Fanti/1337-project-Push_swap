/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:24:23 by afanti            #+#    #+#             */
/*   Updated: 2023/01/14 21:34:07 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int			i;
	long long	s;
	int			d;

	s = 0;
	d = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			d *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = s * 10 + (str[i] - 48);
		fanti(s, d);
		i++;
	}
	return (s * d);
}

void	fanti(long long s, int i)
{
	if (s > 2147483647 && i == 1)
	{
		write (2, "Error\n", 6);
		exit(1);
	}
	else if (s > 2147483648 && i == -1)
	{
		write (2, "Error\n", 6);
		exit(1);
	}
}

void	sort4numbers(t_list **stack_a, t_list **stack_b)
{
	int	tani;
	int	talt;

	pb(stack_a, stack_b);
	sort3number(stack_a);
	tani = (*stack_a)->next->content;
	talt = (*stack_a)->next->next->content;
	sort4numberss(stack_a, stack_b, tani, talt);
}

void	sort4numberss(t_list **stack_a, t_list **stack_b, int tani, int talt)
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
}
