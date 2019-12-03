# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 13:22:47 by davyd11           #+#    #+#              #
#    Updated: 2019/12/03 12:02:54 by dpuente-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=	ft_atoi.c     ft_isdigit.c  ft_memmove.c  ft_strlcpy.c  ft_tolower.c ft_putnbr_fd.c ft_lstadd_front.c\
		ft_bzero.c    ft_isprint.c  ft_memset.c   ft_strlen.c   ft_toupper.c ft_putstr_fd.c ft_lstclear.c\
		ft_calloc.c   ft_memccpy.c  ft_strchr.c   ft_strncmp.c 	ft_strtrim.c ft_split.c ft_lstadd_back.c\
		ft_isalnum.c  ft_memchr.c   ft_strdup.c   ft_strnstr.c 	ft_itoa.c ft_putendl_fd.c ft_lstsize.c\
		ft_isalpha.c  ft_memcmp.c   ft_strjoin.c  ft_strrchr.c 	ft_strmapi.c ft_lstnew.c ft_lstnew.c ft_lstmap.c\
		ft_isascii.c  ft_memcpy.c   ft_strlcat.c  ft_substr.c 	ft_putchar_fd.c ft_lstlast.c ft_lstdelone.c

OBJECTS=ft_atoi.o     ft_isdigit.o  ft_memmove.o  ft_strlcpy.o  ft_tolower.o ft_putnbr_fd.o ft_lstadd_front.o\
		ft_bzero.o    ft_isprint.o  ft_memset.o   ft_strlen.o   ft_toupper.o ft_putstr_fd.o ft_lstclear.o\
		ft_calloc.o   ft_memccpy.o  ft_strchr.o   ft_strncmp.o 	ft_strtrim.o ft_split.o ft_lstadd_back.o\
		ft_isalnum.o  ft_memchr.o   ft_strdup.o   ft_strnstr.o 	ft_itoa.o ft_putendl_fd.o ft_lstsize.o\
		ft_isalpha.o  ft_memcmp.o   ft_strjoin.o  ft_strrchr.o 	ft_strmapi.o ft_lstnew.o ft_lstnew.o ft_lstmap.o\
		ft_isascii.o  ft_memcpy.o   ft_strlcat.o  ft_substr.o 	ft_putchar_fd.o ft_lstlast.o ft_lstdelone.o


INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
