# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 14:24:58 by oevtushe          #+#    #+#              #
#    Updated: 2018/08/05 17:01:16 by sasha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# In case of FT_DIR is passed as env variable.
override FT_DIR	:= .

include 		Pretty.mk
include 		Libft.mk
include			Templates.mk

all: $(FT_NAME)
obj: $(FT_OBJS)

$(eval $(call LIB_template,FT,libft))
$(eval $(call BASIC_template,FT))

clean:
	@$(RM) $(FT_OBJS_DIR)
fclean: clean
	@$(RM) $(FT_NAME)
