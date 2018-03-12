# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 14:24:58 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/12 11:55:10 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include Pretty.mk
include Libft.mk

CFLAGS			:= -Wall -Werror -Wextra
CC				:= gcc
AR				:= ar
ARFLAGS			:= rc
RM				:= rm -rf

all: $(FT_NAME)

obj: $(FT_OBJS)

$(FT_OBJS_DIR)/%.o: %.c $(FT_DEPS)
	@$(call COMPILE_P,$(@:%=$(RPTH)/%))
	@$(CC) $(CFLAGS) -o $@ -c $< -I$(FT_DEPS_DIR)

$(FT_NAME): $(FT_OBJS)
	@$(call MKLIB_P)
	@$(AR) $(ARFLAGS) $(FT_NAME) $?
	@ranlib $(FT_NAME)
	@$(call DONE_P)

$(FT_OBJS): |$(FT_OBJS_DIR)

$(FT_OBJS_DIR):
	@$(call DIR_CREATE_P,$(FT_OBJS_DIR:$(FT_DIR)/%=$(RPTH)/%))
	@mkdir $@

clean:
	@$(RM) $(FT_OBJS_DIR)
fclean: clean
	@$(RM) $(FT_NAME)
re: fclean
	@$(MAKE) -s

.PHONY: all clean fclean re obj
