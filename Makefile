NAME		= push_swap
C_NAME		= checker

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

INC_DIR		= ./include

C_SRC_DIR	= ./check_src/
C_OBJ_DIR	= ./check_obj/
C_SRC_NAME	=	parsing.c \
				check.c \
				move1.c \
				move2.c \
				move3.c \
				solve.c \
				main.c

C_OBJ_NAME	= $(C_SRC_NAME:.c=.o)

PS_SRC_DIR	= ./ps_src/
PS_OBJ_DIR	= ./ps_obj/
PS_SRC_NAME =	test.c

PS_OBJ_NAME	= $(PS_SRC_NAME:.c=.o)

C_SRC		= $(addprefix $(C_SRC_DIR), $(C_SRC_NAME))
C_OBJ		= $(addprefix $(C_OBJ_DIR), $(C_OBJ_NAME))
PS_SRC		= $(addprefix $(PS_SRC_DIR), $(PS_SRC_NAME))
PS_OBJ		= $(addprefix $(PS_OBJ_DIR), $(PS_OBJ_NAME))
LIB			= ./libft/libft.a

all: $(NAME)

$(NAME): $(C_OBJ) $(PS_OBJ)
	@make -C libft
	@$(CC) $(LIB) $(C_OBJ) -o $(C_NAME)
	@echo checker OK
	@$(CC) $(LIB) $(PS_OBJ) -o $(NAME)
	@echo push_swap OK

$(C_OBJ_DIR)%.o: $(C_SRC_DIR)%.c
	@mkdir -p $(C_OBJ_DIR)
	@$(CC) -I $(INC_DIR) $(CFLAGS)  -o $@ -c $<

$(PS_OBJ_DIR)%.o: $(PS_SRC_DIR)%.c
	@mkdir -p $(PS_OBJ_DIR)
	@$(CC) -I $(INC_DIR) $(CFLAGS)  -o $@ -c $<

clean:
	@make -C libft clean
	@rm -rf $(C_OBJ_DIR)
	@rm -rf $(PS_OBJ_DIR)
	@echo Push_swap clean OK

fclean: clean
	@rm -rf $(LIB)
	@echo libft fclean OK
	@rm -rf $(C_NAME)
	@rm -rf $(NAME)
	@echo Push_swap fclean OK

re: fclean all

.PHONY: all re clean fclean
