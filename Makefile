# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgonon <mgonon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/31 13:48:28 by mgonon            #+#    #+#              #
#    Updated: 2018/01/31 13:55:21 by mgonon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= lem-in

I_DIR	= includes
S_DIR	= srcs
O_DIR	= objs

INCS	= lem_in.h
FILES	= lem_exit.c \
		  lem_in.c \
		  lem_parse.c
SRCS 	= $(addprefix $(S_DIR)/, $(FILES))
OBJS 	= $(SRCS:%.c=%.o)

FLAGS 	= -Werror -Wall -Wextra

all: $(NAME)

%.o: %.c $(I_DIR)/$(INCS)
	@echo "\033[1A\033[K\033[33;32mCompiling [$@]"
	@gcc $(FLAGS) -o $@ -c $<
	
libft: 
	make -C libft

$(NAME): libft $(OBJS)
	@echo ""
	@gcc $(FLAGS) -o $(NAME) $(OBJS) -Llibft -lft
	@echo "\033[33;32mCreating $(NAME)"
	@rm -f $(OBJS)
	
clean:
	@make -C libft/ clean
	@rm -f $(OBJS)

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME)
	@echo "\033[33;31mDeleting $(NAME)"

re: fclean all

.PHONY: re clean fclean all libft
