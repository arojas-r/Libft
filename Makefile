# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 03:59:44 by arojas-r          #+#    #+#              #
#    Updated: 2024/04/03 19:37:30 by arojas-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc

RM = rm -rf

NAME = libft.a

SRCS = ft_isalnum.c	\
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c  \
	   ft_bzero.c   \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_memset.c  \
	   ft_memcpy.c  \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c  \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memcmp.c  \
	   ft_memmove.c \
	   ft_strnstr.c \
	   ft_atoi.c    \
	   ft_calloc.c  \
	   ft_strdup.c  \
	   ft_memchr.c  \

FLAGS = -Wall -Wextra -Werror -c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ $<

clean:
	$(RM) *.o *.a

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
