# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Gnl.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/07 13:50:55 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/07 14:44:11 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include Makefile

GNL_DIR := gnl
GNL_DEP := get_next_line.h
GNL_SRC := get_next_line.c
GNL_OBJ := $(GNL_SRC:%.c=$(OBJS_DIR)/%.o)

gnl: $(NAME) $(GNL_OBJ)

$(GNL_OBJ): $(GNL_DIR)/$(GNL_SRC) $(GNL_DIR)/$(GNL_DEP)
	@echo "$(BLUE)Adding gnl...$(RESET)"
	@gcc $(CFLAGS) -o $@ -c $< -I$(GNL_DIR) -I$(DEPS_DIR)
	@ar -r $(NAME) $(GNL_OBJ)
	@ranlib $(NAME)
	@echo "$(YELLOW)Done !$(RESET)"
