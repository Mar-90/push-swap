# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maalamer <maalamer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 13:36:17 by maalamer          #+#    #+#              #
#    Updated: 2023/07/19 11:36:39 by maalamer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS 	   = ft_strlen.c \
			 ft_memmove.c \
			 ft_memcpy.c \
			 ft_strlcpy.c \
			 ft_strlcat.c \
			 ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_memset.c \
			 ft_bzero.c \
			 ft_toupper.c \
			 ft_tolower.c \
			 ft_strchr.c \
			 ft_strrchr.c \
			 ft_strncmp.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_strnstr.c \
			 ft_atoi.c \
			 ft_calloc.c \
			 ft_strdup.c \
			 ft_substr.c \
			 ft_strjoin.c \
			 ft_strtrim.c \
			 ft_split.c \
			 ft_itoa.c \
			 ft_strmapi.c \
			 ft_striteri.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putnbr_fd.c \
			 ft_putendl_fd.c \


SRCSB = ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

bonus: $(OBJSB)
		ar -rcs $(NAME) $(OBJSB)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f libft.a

re: fclean all
