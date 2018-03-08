# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 14:24:58 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/08 13:10:08 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include Colors.mk
include Libft.mk

OBJS_DIR		:= objs
OBJS			:= $(FT_SRCS:$(FT_DIR)/%.c=$(OBJS_DIR)/%.o)
CFLAGS			:= -Wall -Werror -Wextra

$(OBJS_DIR)/%.o: %.c $(FT_DEPS)
	@echo "$(CYAN)Compile:$(RESET) $(UNDERLINE)$(GREEN)$@$(RESET)"
	@gcc $(CFLAGS) -c -o $@ $< -I$(FT_DEPS_DIR)

all: $(FT_NAME)

$(FT_NAME): $(OBJS)
	@echo "$(GRAY)Making lib...$(RESET)"
	@ar -rc $(FT_NAME) $^
	@ranlib $(FT_NAME)
	@echo "$(CYAN)$(BOLD)Done !$(RESET)"

$(OBJS): |$(OBJS_DIR)

$(OBJS_DIR):
	@mkdir $(OBJS_DIR)

clean:
	@echo "$(RED)Cleaning $(OBJS_DIR)$(RESET)"
	@rm -rf $(OBJS_DIR)
fclean: clean
	@echo "$(RED)Deleting $(FT_NAME)$(RESET)"
	@rm -f $(FT_NAME)
re: fclean
	@$(MAKE) -s

# To add get_next_line to library run 'make gnl GNL=<some value>'

ifdef GNL
include GNL.mk
endif

.PHONY: all clean fclean re
