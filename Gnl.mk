# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Gnl.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/07 13:50:55 by oevtushe          #+#    #+#              #
#    Updated: 2018/03/08 17:09:31 by oevtushe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FT_DIR		?= .

GNL_DIR		:= gnl
GNL_DEPF	:= get_next_line.h
GNL_SRCF 	:= get_next_line.c

GNL_DEPS	:= $(addprefix $(FT_DIR)/$(GNL_DIR)/,$(GNL_DEPF))
GNL_SRCS	:= $(addprefix $(FT_DIR)/$(GNL_DIR)/,$(GNL_SRCF))
GNL_OBJS 	:= $(GNL_SRCF:$(FT_DIR)/%.c=%.o)
