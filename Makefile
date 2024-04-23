# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 03:59:44 by arojas-r          #+#    #+#              #
#    Updated: 2024/04/10 19:38:00 by arojas-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

RM = rm -rf

NAME = libft.a

SRCS = ft_isalnum.c	 \
	   ft_isascii.c  \
	   ft_isprint.c  \
	   ft_strlen.c   \
	   ft_bzero.c    \
	   ft_isalpha.c  \
	   ft_isdigit.c  \
	   ft_memset.c   \
	   ft_memcpy.c   \
	   ft_strlcpy.c  \
	   ft_strlcat.c  \
	   ft_toupper.c  \
	   ft_tolower.c  \
	   ft_strchr.c   \
	   ft_strrchr.c  \
	   ft_strncmp.c  \
	   ft_memcmp.c   \
	   ft_memmove.c  \
	   ft_strnstr.c  \
	   ft_atoi.c     \
	   ft_calloc.c   \
	   ft_strdup.c   \
	   ft_memchr.c   \
	   ft_substr.c   \
	   ft_strjoin.c  \
	   ft_strtrim.c  \
	   ft_split.c    \
	   ft_itoa.c     \
	   ft_strmapi.c  \
	   ft_striteri.c \
	   ft_putchar_fd.c\
	   ft_putstr_fd.c \
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c \

SRC_BONUS =	ft_lstnew.c

FLAGS = -Wall -Wextra -Werror -c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ $<

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
