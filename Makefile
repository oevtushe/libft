# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 14:24:58 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/08 16:42:57 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include Colors.mk
include Libft.mk

OBJS_DIR		:= $(FT_DIR)/objs

# Variable for futue modules. 
OBJS_DIRS		:= $(OBJS_DIR)

OBJS			:= $(FT_SRCS:$(FT_DIR)/%.c=$(OBJS_DIR)/%.o)
CFLAGS			:= -Wall -Werror -Wextra

ifeq ($(GNL),on)
include Gnl.mk
FT_SRCS			+= $(GNL_SRCS)
FT_DEPS			+= $(GNL_DEPS)
OBJS			+= $(GNL_SRCS:$(FT_DIR)/%.c=$(OBJS_DIR)/%.o)
OBJS_DIRS		+= $(OBJS_DIR)/$(GNL_DIR)
endif

all: $(FT_NAME)

$(OBJS_DIR)/%.o: %.c $(FT_DEPS)
	@echo "$(CYAN)Compile:$(RESET) $(UNDERLINE)$(GREEN)$@$(RESET)"
	@gcc $(CFLAGS) -c -o $@ $< -I$(FT_DEPS_DIR)

$(FT_NAME): $(OBJS)
	@echo "$(GRAY)Making lib...$(RESET)"
	@ar -rc $(FT_NAME) $^
	@ranlib $(FT_NAME)
	@echo "$(CYAN)$(BOLD)Done !$(RESET)"

$(OBJS): |$(OBJS_DIRS)

$(OBJS_DIRS):
	@echo "$(DBOLD)$(GREEN)Dir $@ created.$(RESET)"
	@mkdir $@

clean:
	@echo "$(RED)Dir $(UNDERLINE)$(OBJS_DIR)$(RESET) $(RED)deleted.$(RESET)"
	@rm -rf $(OBJS_DIR)
fclean: clean
	@echo "$(RED)File $(UNDERLINE)$(FT_NAME)$(RESET) $(RED)deleted.$(RESET)"
	@rm -f $(FT_NAME)
re: fclean
	@$(MAKE) -s

.PHONY: all clean fclean re
