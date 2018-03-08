# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Gnl.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/07 13:50:55 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/08 13:10:10 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS_DIR	?= ./

GNL_DIR		:= gnl
GNL_DEPF	:= get_next_line.h
GNL_SRCF 	:= get_next_line.c

GNL_DEPS	:= $(addprefix $(GNL_DIR)/,$(GNL_DEPF))
GNL_SRCS	:= $(addprefix $(GNL_DIR)/,$(GNL_SRCF))
GNL_OBJS 	:= $(GNL_SRCF:%.c=$(OBJS_DIR)/%.o)

gnl: $(GNL_OBJS)

$(GNL_OBJS): $(GNL_SRCS) $(GNL_DEPS) $(FT_NAME)
	@echo "$(BLUE)Adding gnl...$(RESET)"
	@gcc $(CFLAGS) -o $@ -c $< -I$(GNL_DIR) -I$(FT_DEPS_DIR)
	@ar -r $(FT_NAME) $(GNL_OBJS)
	@ranlib $(FT_NAME)
	@echo "$(CYAN)$(BOLD)Done !$(RESET)"
.PHONY: gnl
