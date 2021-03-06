NAME = minishell

SRC  =	Sources/commands.c				\
		Sources/env.c					\
		Sources/exit.c					\
		Sources/ft.c					\
		Sources/ft_2.c					\
		Sources/ft_strsplit.c			\
		Sources/minishell.c				\
		Sources/shell.c					\
		Sources/unstandart.c			\
		Sources/unstandart_2.c			\
		Sources/list.c					\
		Sources/cd.c					\
		Sources/ft_split_whitespaces.c	\
		Sources/readline.c				\

OBJ  = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

RED= \033[1;31m
GREEN= \033[1;32m
YELLOW= \033[1;33m
BLUE= \033[1;34m
VIOLET= \033[1;35m
RESET= \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) $(OBJ) -o $(NAME) -lreadline -ledit
	@echo "$(GREEN)Project is successfully compiled$(RESET)"

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	@echo "$(RED)Suspending library files$(VIOLET)"
	rm -rf *.o

fclean: clean
	@echo "$(RED)Suspending project files$(VIOLET)"
	rm -rf $(OBJ)
	rm -rf $(NAME)
	@echo "$(RESET)"
re: fclean all
