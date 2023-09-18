# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhavlick <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 16:56:49 by jhavlick          #+#    #+#              #
#    Updated: 2023/09/11 17:19:49 by jhavlick         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
AR = ar
CC = cc
RM = rm
COMPILER_FLAGS = -Wall -Wextra -Werror

SRC =   ft_isalpha.c\
        ft_isdigit.c\
        ft_isalnum.c\

OBJ = $(SRC:%.c=%.o)

%.o: %.c
	$(CC) $(COMPILER_FLAGS) -c $< -o $@

all: $(OBJ)
	$(AR) -rcs $(NAME) $(OBJ)

clean:
	$(RM) -f $(OBJ)
fclean: clean
	$(RM) -f $(NAME)
re: fclean all

.PHONY: all clean fclean re