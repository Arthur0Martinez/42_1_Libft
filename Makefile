# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artmarti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 15:09:16 by artmarti          #+#    #+#              #
#    Updated: 2023/03/07 17:10:06 by artmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
ALLFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c \
	ft_itoa.c ft_split.c ft_lstlast.c \

BONUSFILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \

OBJECTS = $(ALLFILES:.c=.o)

BONUS = $(BONUSFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

bonus : $(OBJECTS) $(BONUS)
	ar rcs $(NAME) $(OBJECTS) $(BONUS)

clean :
	rm -rf $(OBJECTS) $(BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all


