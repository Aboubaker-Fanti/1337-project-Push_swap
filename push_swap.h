/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:03:13 by afanti            #+#    #+#             */
/*   Updated: 2023/01/15 20:22:37 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list{
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}t_list;

t_list	*add_node(long content);
int		length(t_list *stack);
int		check_if_sorted(t_list *stack);
void	swap_a(t_list *head);
void	sb(t_list *head);
void	ss(t_list *head, t_list *stack_b);
void	ra(t_list **head);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
int		main(int ac, char **av);
void	ft_lstaddd_back(t_list **lst, t_list *new);
int		ft_atoi(const char *str);
int		main(int ac, char **av);
int		checknumbers(t_list *stack);
void	sort3number(t_list **stack_a);
void	do_check_av(char **av);
int		herecheck(char *str, int c);
int		ft_isdigi(int c);
void	do_check_max(int *aray, int k);
void	do_check_dup(int *aray, int k);
void	sort5numbers(t_list **stack_a, t_list **stack_b);
void	for5numbers(t_list **stack_a, t_list **stack_b);
void	sort100numbers(t_list **stack_a, t_list **stack_b);
void	test(t_list **stack_a, t_list **stack_b, int n, int i);
void	sortrbaalowal(int *aray, int i, t_list **stack_a, t_list **stack_b);
int		returnhow(int *aray, t_list **stack_a, int k);
void	sortnaslokhar(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortma9ablalakhir(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortlakhir(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortit(t_list **stack_a, t_list **stack_b);
void	sortaray1(int *aray, int i);
void	sortaray(int *aray, int y);
void	lasttest(t_list **stack_a, t_list **stack_b, int n, int i);
int		returnwhere(int *aray, t_list **stack_b, int d);
void	sort5numberss(t_list **stack_a, t_list **stack_b, int tani, int talt);
void	for5numberss(t_list **stack_a, t_list **stack_b, int tani, int talt);
void	takmile(t_list **stack_a, t_list **stack_b, int *aray, int i);
void	fanti(long long s, int i);
void	sort4numbers(t_list **stack_a, t_list **stack_b);
void	sort4numberss(t_list **stack_a, t_list **stack_b, int tani, int talt);
void	run(t_list **stack_a, t_list **stack_b, int i);
void	changetoaray(t_list **stack_a);
void	ft_error(char **av);
int		strlenn(char *str);
/*#here are some of 500*/
void	sort500numbers(t_list **stack_a, t_list **stack_b);
void	sortob5001(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5002(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5003(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5004(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5005(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5006(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5007(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5008(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5009(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortob5000(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	sortma(int *aray, int i, t_list **stack_a, t_list **stack_b);
void	iftherepus(char *str);
void	ifacempty(char **av);
char	**ft_split(char const *s, char c);

void	complit(char **conten, int j, t_list **stack_a);

void	printerror(char **av, int i, int a);
void	mainkmala(t_list **stack_a, t_list **stack_b, char **av, int ac);

#endif
