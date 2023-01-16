# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afanti <afanti@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 15:25:09 by afanti            #+#    #+#              #
#    Updated: 2023/01/15 20:28:42 by afanti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = CC

CFLAGS = -Wall -Wextra -Werror

SRC = puch_swap.c\
		therules.c\
		therules1.c\
		addlencheck.c\
		ft_atoi.c\
		for3numbers.c\
		Error.c\
		for100numbers.c\
		to_sort_to_b.c\
		lastsort.c\
		sort500.c\
		sort500tob.c\
		sort500tob2.c\
		split.c\
		run.c\


OBJS = $(SRC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJS)
#	ar -rc $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
