# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 18:15:35 by tallaire          #+#    #+#              #
#    Updated: 2021/05/27 18:15:39 by tallaire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors

C_GREY		=	\e[1;30m
C_RED		=	\e[1;31m
C_GREEN		=	\e[1;32m
C_YELLOW	=	\e[1;33m
C_BLUE		=	\e[1;34m
C_PURPLE	=	\e[1;35m
C_CYAN		=	\e[1;36m
C_WHITE		=	\e[1;37m
C_END		=	\e[0m


NAME		=	checker

CC		=	clang

RM		=	rm -rf

CP		=	cp -r

CFLAGS		=	-Werror -Wextra -Wall -c

SRC		+=	main.c

          #################
         ###################
        ####             ####
        ####  PUSH_SWAP  ####
        ####             ####
         ###################
          #################

	##############
	# CHECK_ALGO #
	##############

SRC		+=	check_algo.c
SRC		+=	do_op.c
SRC		+=	get_op.c

	########
	# LIST #
	########

SRC		+=	lst_add_back.c
SRC		+=	lst_free.c
SRC		+=	lst_print.c
SRC		+=	lst_print_op.c
SRC		+=	lst_size.c

	##############
	# OPERATIONS #
	##############

SRC		+=	push_a.c
SRC		+=	push_b.c
SRC		+=	r_rotate.c
SRC		+=	r_reverse_rotate.c
SRC		+=	reverse_rotate_a.c
SRC		+=	reverse_rotate_b.c
SRC		+=	rotate_a.c
SRC		+=	rotate_b.c
SRC		+=	s_swap.c
SRC		+=	swap_a.c
SRC		+=	swap_b.c

	#########
	# UTILS #
	#########

SRC		+=	is_overflow.c
SRC		+=	free_pile.c

OBJ_PATH	=	./.obj/

vpath %.c srcs/
vpath %.c srcs/checker/
vpath %.c srcs/check_algo/
vpath %.c srcs/list/
vpath %.c srcs/operations/
vpath %.c srcs/utils/

OBJ			=	$(patsubst %.c, $(OBJ_PATH)%.o, $(SRC))

LIBFT_NAME		=	libft.a

HEADER_NAME		=	push_swap.h

LIB_PATH		=	./.lib

HEADER_PATH		=	./include

LIBFT_PATH		=	./../libft

LIBFT_SRC		=	$(addprefix $(LIBFT_PATH)/, $(LIBFT_NAME))

LIBFT			=	$(addprefix $(LIB_PATH)/, $(LIBFT_NAME))

HEADER			=	$(addprefix $(HEADER_PATH)/, $(HEADER_NAME))

all: $(NAME) $(HEADER) Makefile

$(NAME): $(LIB_PATH) $(LIBFT_SRC) $(LIBFT) $(OBJ_PATH) $(OBJ)
	   @$(CC) -I$(HEADER_PATH)/ -o $(NAME) $(OBJ) $(LIBFT)
	@($(CP) $(NAME) ..)

$(OBJ): $(OBJ_PATH)%.o: %.c $(HEADER) Makefile
	@$(CC) -I$(HEADER_PATH)/ $(CFLAGS) $< -o $@

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

$(LIBFT):
	@$(CP) $(LIBFT_SRC) $(LIB_PATH)

$(LIBFT_SRC):
	@(cd $(LIBFT_PATH) && $(MAKE))

$(LIB_PATH):
	@mkdir $(LIB_PATH)

clean:
	@$(RM) $(OBJ_PATH)
	@(cd $(LIBFT_PATH) && $(MAKE) clean)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIB_PATH)
	@(cd $(LIBFT_PATH) && $(MAKE) fclean)
	@(cd .. && $(RM) $(NAME))

re: fclean all
