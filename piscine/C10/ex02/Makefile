NAME = ft_tail 
SRCS = main.c functions.c func2.c func3.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:  $(NAME)

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


