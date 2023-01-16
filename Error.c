/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:01:30 by afanti            #+#    #+#             */
/*   Updated: 2023/01/15 20:42:42 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

void	do_check_av(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_error(av);
	while (av[i])
	{
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != '-'
				&& av[i][j] != '+' && av[i][j] != ' ')
			{
				write (2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	do_check_dup(int *aray, int k)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j <= k)
	{
		while (i < k)
		{
			if (aray[j] == aray[i])
			{
				write (2, "Error\n", 6);
				exit(1);
			}
			i++;
		}
		i = j + 2;
		j++;
	}
}
