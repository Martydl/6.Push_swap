NAME		= checker

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

INC_DIR		= ./include

C_SRC_DIR		= ./check_src
C_OBJ_DIR		= ./check_obj
C_SRC_NAME	=	parsing.c \
				check.c \
				move.c \
				main.c

C_OBJ_NAME	= $(C_SRC_NAME:.c=.o)

C_SRC			= $(addprefix $(C_SRC_DIR)/, $(C_SRC_NAME))
C_OBJ			= $(addprefix $(C_OBJ_DIR)/, $(C_OBJ_NAME))
LIB			= ./libft/libft.a

all: $(NAME)

$(NAME): $(C_OBJ)
	@make -C libft
	@echo Libft OK
	@$(CC) $(CFLAGS) $(LIB) $(C_OBJ) -o $@
	@echo checker OK

$(C_OBJ_DIR)/%.o: $(C_SRC_DIR)/%.c
	@mkdir -p $(C_OBJ_DIR)
	@$(CC) -I $(INC_DIR) -o $@ -c $<

clean:
	@make -C libft clean
	@rm -rf $(C_OBJ_DIR)
	@echo clean OK

fclean: clean
	@rm -rf $(LIB)
	@rm -rf $(NAME)
	@echo fclean OK

re: fclean all

.PHONY: all re clean fclean
