# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 14:24:58 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/10 16:55:58 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include Colors.mk
include Libft.mk

CFLAGS			:= -Wall -Werror -Wextra -g

all: $(FT_NAME)

obj: $(FT_OBJS)

$(FT_OBJS_DIR)/%.o: %.c $(FT_DEPS)
	@echo "$(CYAN)Compile:$(RESET) $(UNDERLINE)$(GREEN)$@$(RESET)"
	@gcc $(CFLAGS) -c -o $@ $< -I$(FT_DEPS_DIR)

$(FT_NAME): $(FT_OBJS)
	@echo "$(GRAY)Making lib...$(RESET)"
	@ar -rc $(FT_NAME) $?
	@ranlib $(FT_NAME)
	@echo "$(CYAN)$(BOLD)Done !$(RESET)"

$(FT_OBJS): |$(FT_OBJS_DIR)

$(FT_OBJS_DIR):
	@echo "$(DBOLD)$(GREEN)Dir $(UNDERLINE)$@$(RESET) $(DBOLD)$(GREEN)created.$(RESET)"
	@mkdir $@

clean:
	@echo "$(RED)Dir $(UNDERLINE)$(FT_OBJS_DIR)$(RESET) $(RED)deleted.$(RESET)"
	@rm -rf $(FT_OBJS_DIR)
fclean: clean
	@echo "$(RED)File $(UNDERLINE)$(FT_NAME)$(RESET) $(RED)deleted.$(RESET)"
	@rm -f $(FT_NAME)
re: fclean
	@$(MAKE) -s

.PHONY: all clean fclean re obj
