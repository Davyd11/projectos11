# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 15:18:42 by davyd11           #+#    #+#              #
#    Updated: 2020/01/23 15:19:59 by davyd11          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC_PATH = ./
LIB_PATH = ./lib
INC_PATH = ./
OBJ_PATH = ./objs
OBJLIB_PATH = ./obj


SRC_NAME =	#ft_find_conv.c\
			#ft_find_flags.c\


LIB_NAME = 	#ft_atoi.c\
			#ft_bzero.c\


INC_NAME = ft_printf.h

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJLIB_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
LIB = $(addprefix $(LIB_PATH)/, $(LIB_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJLIB = $(addprefix $(OBJLIB_PATH)/,$(OBJLIB_NAME))

all: $(NAME)

$(NAME): $(OBJ) $(OBJLIB) $(INC_NAME)
	@ar rc $(NAME) $(OBJ) $(OBJLIB)
	@ranlib $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

$(OBJLIB_PATH)/%.o: $(LIB_PATH)/%.c
	@mkdir -p $(OBJLIB_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@rm -rf $(OBJ) $(OBJLIB)

fclean: clean
	@rm -rf ./obj $(NAME)
	@rm -rf $(OBJ_PATH)

re: fclean all

.PHONY: fclean clean re
