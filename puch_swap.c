/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puch_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:21:33 by afanti            #+#    #+#             */
/*   Updated: 2023/01/17 00:04:24 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac == 1)
		exit(1);
	mainkmala(&stack_a, &stack_b, av, ac);
}

void	ft_error(char **av)
{
	int	i;
	int	s;

	s = 0;
	i = 1;
	while (av[i])
	{
		if (av[i][0] == '\0')
		{
			write (2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	ifacempty(av);
}

int	strlenn(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	mainkmala(t_list **stack_a, t_list **stack_b, char **av, int ac)
{
	int		i;
	int		j;
	int		h;
	char	**conten;

	i = 0;
	h = 0;
	while (++i < ac)
	{
		do_check_av(av);
		conten = ft_split(av[i], ' ');
		j = 0;
		while (conten[j])
		{
			complit(conten, j, stack_a);
			h++;
			j++;
		}
		free(conten);
	}
	changetoaray(stack_a);
	run(stack_a, stack_b, h);
	sortit(stack_a, stack_b);
}

void	complit(char **conten, int j, t_list **stack_a)
{
	int	content;

	iftherepus(conten[j]);
	content = ft_atoi(conten[j]);
	ft_lstaddd_back(stack_a, add_node(content));
	free(conten[j]);
}
