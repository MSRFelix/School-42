NAME = rush-02
SRCS = $(wildcard *.c) 
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:  $(NAME)
	$(RM) $(OBJS)		
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
