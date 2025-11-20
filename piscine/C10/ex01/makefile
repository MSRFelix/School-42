# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flanghof <flanghof@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/26 07:41:39 by flanghof          #+#    #+#              #
#    Updated: 2025/09/26 07:56:43 by flanghof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test.exe
SRCS = main.c 
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)


%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
	$(RM)


clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
