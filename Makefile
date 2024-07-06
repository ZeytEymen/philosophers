NAME = philo
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = main.c utils.c checks.c initialize.c

$(NAME): 
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(NAME)

fclean:
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re