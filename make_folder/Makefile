# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :::::::::    #
#                                                     +:+ +:+         +:+      #
#    By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/18 14:07:21 by vvieira           #+#    #+#              #
#    Updated: 2025/07/18 20:31:30 by vvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar

RANLIB = ranlib

RM = rm -f


NAME = libft.a


SRC = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
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
	ft_putendl_fd.c \
	ft_putnbr_fd.c


BONUS_SRC = \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c


OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)


all: $(NAME)


$(NAME): $(OBJ)
	$(AR) rcs $@ $(OBJ)
	@echo "$(NAME) created"
	$(RANLIB) $@
	@echo "$(NAME) indexed"


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "$(NAME) with bonus functions created"
	$(RANLIB) $(NAME)
	@echo "$(NAME) indexed"


clean:
	$(RM) $(OBJ) $(BONUS_OBJ)
	@echo "Object files deleted"


fclean: clean
	$(RM) $(NAME)
	@echo "$(NAME) deleted"


re: fclean all

.PHONY: all clean fclean re bonus