NAME = libftprintf.a
SRCS = ft_printf.c ft_print_char.c ft_print_str.c ft_print_nbr.c ft_print_unsigned.c ft_print_hex.c ft_print_ptr.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all
