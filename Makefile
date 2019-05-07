PS = push_swap
CH = checker

# Sources
CH_SRC_NAME	=	parsing.c \
				check.c \
				do_it.c \
				move1.c \
				move2.c \
				move3.c \
				main.c

PS_SRC_NAME =	main.c \
				solve.c \
				sort.c \
				minisort.c \
				list.c \
				func.c \
				algo1.c \
				algo2.c \
				move1.c \
				move2.c \
				move3.c

INCS_NAME	=	push_swap.h \
				checker.h

LDLIBS		=	libft.a

# Directories

PS_SRC_DIR	=	./ps_src/
PS_OBJ_DIR	=	./ps_obj/
CH_SRC_DIR	=	./ch_src/
CH_OBJ_DIR	=	./ch_obj/
INCS_DIR	=	./includes/
LDFLAGS		=	./libft/

# Files

PS_SRC		=	$(addprefix $(PS_SRC_DIR), $(PS_SRC_NAME))
PS_OBJ		=	$(patsubst $(PS_SRC_DIR)%.c, $(PS_OBJ_DIR)%.o, $(PS_SRC))
CH_SRC		=	$(addprefix $(CH_SRC_DIR), $(CH_SRC_NAME))
CH_OBJ		=	$(patsubst $(CH_SRC_DIR)%.c, $(CH_OBJ_DIR)%.o, $(CH_SRC))
INC			=	$(addprefix $(INCS_DIR), $(INCS_NAME))

# Compilation

CC			=	gcc
CPPFLAGS	=	-I $(INCS_DIR)
LIBH		=	-I $(LDFLAGS)includes/
CFLAGS		=	-Wall -Wextra -Werror -g $(CPPFLAGS) $(LIBH)

all: lib ps ch

lib:
		@make -sC libft -j 100

librm:
		@make -sC libft fclean

ps: lib $(PS_OBJ)
	@$(CC) $(PS_OBJ) libft/libft.a -o $(PS)

ch: lib $(CH_OBJ)
	@$(CC) $(CH_OBJ) libft/libft.a -o $(CH)

$(PS): lib $(PS_OBJ)
	@$(CC) $(PS_OBJ) libft/libft.a -o $(PS)

$(CH): lib $(CH_OBJ)
	@$(CC) $(CH_OBJ) libft/libft.a -o $(CH)

$(PS_OBJ_DIR)%.o: $(PS_SRC_DIR)%.c $(INC)
	@mkdir -p ps_obj
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

$(CH_OBJ_DIR)%.o: $(CH_SRC_DIR)%.c $(INC)
	@mkdir -p ch_obj
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -rf $(PS_OBJ_DIR)
	@rm -rf $(CH_OBJ_DIR)

fclean: clean librm
	@rm -f $(PS)
	@rm -f $(CH)

re: fclean all

.PHONY: all lib librm ps ch clean fclean re
