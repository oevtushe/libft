# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 14:24:58 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/10 09:53:43 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include Colors.mk
include Libft.mk

OBJS_DIR		:= $(FT_DIR)/objs

OBJS			:= $(FT_SRCS:$(FT_DIR)/%.c=$(OBJS_DIR)/%.o)
CFLAGS			:= -Wall -Werror -Wextra

all: $(FT_NAME)

$(OBJS_DIR)/%.o: %.c $(FT_DEPS)
	@echo "$(CYAN)Compile:$(RESET) $(UNDERLINE)$(GREEN)$@$(RESET)"
	@gcc $(CFLAGS) -c -o $@ $< -I$(FT_DEPS_DIR)

$(FT_NAME): $(OBJS)
	@echo "$(GRAY)Making lib...$(RESET)"
	@ar -rc $(FT_NAME) $^
	@ranlib $(FT_NAME)
	@echo "$(CYAN)$(BOLD)Done !$(RESET)"

$(OBJS): |$(OBJS_DIR)

$(OBJS_DIR):
	@echo "$(DBOLD)$(GREEN)Dir $(UNDERLINE)$@$(RESET) $(DBOLD)$(GREEN)created.$(RESET)"
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
