NAME = minishell

SRC  = Sources/minishell.c Sources/ft.c Sources/ft_strsplit.c Sources/commands.c Sources/exit.c Sources/unstandart.c

OBJ  = $(SRC:.c=.o)

FLAGS = 


RED= \033[1;31m
GREEN= \033[1;32m
YELLOW= \033[1;33m
BLUE= \033[1;34m
VIOLET= \033[1;35m

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Project is successfully compiled"

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	@echo "$(RED)Suspending library files$(VIOLET)"
	rm -rf *.o

fclean: clean
	@echo "$(RED)Suspending project files$(VIOLET)"
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all
