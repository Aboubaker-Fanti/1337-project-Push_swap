/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:50:07 by afanti            #+#    #+#             */
/*   Updated: 2023/01/17 00:04:00 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	run(t_list **stack_a, t_list **stack_b, int i)
{
	int	s;

	s = check_if_sorted(*stack_a);
	if (s == 1)
		exit(0);
	if (i == 2)
		swap_a(*stack_a);
	else if (i == 3)
		sort3number(stack_a);
	else if (i == 4)
		sort4numbers(stack_a, stack_b);
	else if (i == 5)
		sort5numbers(stack_a, stack_b);
	else if (i > 5 && i <= 200)
		sort100numbers(stack_a, stack_b);
	else if (i > 200)
		sort500numbers(stack_a, stack_b);
}

void	iftherepus(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			write (2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void	changetoaray(t_list **stack_a)
{
	t_list	*temp;
	int		aray[10000];
	int		i;

	temp = *stack_a;
	i = 0;
	while (temp != NULL)
	{
		aray[i++] = temp->content;
		temp = temp->next;
	}
	do_check_dup(aray, i);
}

void	printerror(char **av, int i, int a)
{
	if ((av[i][a] == '-' || av[i][a] == '+')
		&& (av[i][a + 1] == ' ' || av[i][a + 1] == '\0'))
	{
		write (2, "Error\n", 6);
		exit(1);
	}
}

void	ifacempty(char **av)
{
	int	i;
	int	a;
	int	d;

	a = 0;
	i = 1;
	while (av[i])
	{
		d = strlenn(av[i]);
		while (av[i][a])
		{
			printerror(av, i, a);
			a++;
		}
		a = 0;
		while (av[i][a] == ' ')
			a++;
		if (d == a)
		{
			write (2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}
