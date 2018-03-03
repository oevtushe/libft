# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 14:24:58 by oevtushe          #+#    #+#              #
#    Updated: 2017/12/24 13:31:35 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := ft_bzero.c \
	 ft_memcpy.c \
	 ft_memcmp.c \
	 ft_memmove.c \
	 ft_memset.c \
	 ft_strlen.c \
	 ft_strdup.c \
	 ft_strcpy.c \
	 ft_strncpy.c \
	 ft_strcat.c \
	 ft_strncat.c \
	 ft_strlcat.c \
	 ft_strchr.c \
	 ft_strrchr.c \
	 ft_strcmp.c \
	 ft_strstr.c \
	 ft_strnstr.c \
	 ft_strncmp.c \
	 ft_atoi.c \
	 ft_itoabase.c \
	 ft_isalpha.c \
	 ft_isdigit.c \
	 ft_isalnum.c \
	 ft_isascii.c \
	 ft_isprint.c \
	 ft_toupper.c \
	 ft_tolower.c \
	 ft_memalloc.c \
	 ft_memdel.c \
	 ft_strnew.c \
	 ft_strdel.c \
	 ft_strclr.c \
	 ft_striter.c \
	 ft_striteri.c \
	 ft_strmap.c \
	 ft_strmapi.c \
	 ft_strequ.c \
	 ft_strnequ.c \
	 ft_strsub.c \
	 ft_strjoin.c \
	 ft_strtrim.c \
	 ft_putchar.c \
	 ft_putstr.c \
	 ft_putendl.c \
	 ft_putchar_fd.c \
	 ft_putstr_fd.c \
	 ft_putendl.c \
	 ft_putnbr.c \
	 ft_putnbr_fd.c \
	 ft_itoa.c \
	 ft_lstnew.c \
	 ft_lstdelone.c \
	 ft_lstdel.c \
	 ft_lstadd.c \
	 ft_lstiter.c \
	 ft_lstappend.c \
	 ft_memdup.c \
	 ft_lstlen.c \
	 ft_lstmap.c \
	 ft_strsplit.c \
	 ft_memcpy.c \
	 ft_memchr.c \
	 ft_putendl_fd.c \
	 ft_memccpy.c \
	 ft_strconnect.c \
	 ft_swap.c \
	 ft_freadline.c \
	 ft_strfnd.c \
	 ft_str_realloc.c \
	 ft_count_words.c
OBJS := $(SRCS:%.c=%.o)
DEPS_DIR=includes
DEPS := $(DEPS_DIR)/libft.h
CFLAGS=-Wall -Werror -Wextra
NAME=libft.a

%.o: %.c $(DEPS)
	@echo "\033[36mCompiling: $@"
	@gcc $(CFLAGS) -c -o $@ $< -I$(DEPS_DIR)
all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[32mMaking lib..."
	@ar -rc $(NAME) $^
	@ranlib $(NAME)
	@echo "\033[33mDone !"
clean:
	@echo "\033[31mCleaning..."
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean
	@make -s

.PHONY: all clean fclean re
