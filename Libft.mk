# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/08 08:08:33 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/12 10:38:30 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Simply include this file in your Makefile and write rule like this.
# Dont forget to decalre FT_DIR var to current libft directory.
#
#$(NAME): $(FT_OBJS) ...
#$(FT_OBJS_DIR)/%.o: $(FT_DIR)/%.c $(FT_DEPS)
#	@$(MAKE) obj $(MFLAGS) $(FT_DIR)

FT_SRCF				:= ft_bzero.c \
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
					 ft_strfnd.c \
					 ft_str_realloc.c \
					 ft_lstcorder.c \
					 ft_uitoabase_gen.c \
					 ft_putstr_ln.c \
					 ft_spsign.c \
					 ft_strcntllr.c \
					 ft_strtoupper.c \
					 ft_count_words.c
FT_DIR				?= .
FT_NAME				:= $(FT_DIR)/libft.a

FT_DEPS_DIR			:= $(FT_DIR)/includes
FT_DEPF				:= libft.h
FT_DEPS				:= $(addprefix $(FT_DEPS_DIR)/,$(FT_DEPF))

FT_SRCS				:= $(addprefix $(FT_DIR)/,$(FT_SRCF))
FT_OBJS_DIR			:= $(FT_DIR)/objs
FT_OBJS				:= $(FT_SRCS:$(FT_DIR)/%.c=$(FT_OBJS_DIR)/%.o)

# Var for relative path. Simply run this make with
# RPTH=<relative path> to correct print directories.
RPTH				?= $(FT_DIR)
