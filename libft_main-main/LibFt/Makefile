# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jurenaul <jurenaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 16:05:07 by jurenaul          #+#    #+#              #
#    Updated: 2022/11/12 19:20:37 by jurenaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME		= libft.a
INCLUDE		= include
PRINTF		= printf
GNL			= get_next_line
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs

######################## Colors ########################

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

######################## Sources ########################

# printf
SRC_FILES_PRINTF	=	ft_printf ft_utils ft_print_ptr ft_print_unsigned ft_print_hexa
# gnl
SRC_FILES_GNL		=	get_next_line get_next_line_utils

# libft

FTIS_DIR	=	ft_is/
FTIS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTMEM_DIR	=	ft_mem/
FTMEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

FTTO_DIR	=	ft_to/
FTTO		=	ft_atoi ft_itoa ft_tolower ft_toupper

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_split ft_strchr ft_strdup ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr

FTLST_DIR	=	ft_lst/
FTLST		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC_PRINTF 		= 	$(addprefix $(SRC_DIR) $(PRINTF), $(addsuffix .c, $(SRC_FILES_PRINTF)))
SRC_GNL 		= 	$(addprefix $(SRC_DIR) $(GNL), $(addsuffix .c, $(SRC_FILES_GNL)))
SRC_LIBFT 		= 	$(addprefix $(SRC_DIR) $(LIBFT), $(addsuffix .c, $(SRC_FILES_LIBFT)))

OBJ_PRINTF 		= 	$(addprefix $(OBJ_DIR) $(PRINTF), $(addsuffix .o, $(SRC_FILES_PRINTF)))
OBJ_GNL 		= 	$(addprefix $(OBJ_DIR) $(GNL), $(addsuffix .o, $(SRC_FILES_GNL)))
OBJ_LIBFT 		= 	$(addprefix $(OBJ_DIR) $(LIBFT), $(addsuffix .o, $(SRC_FILES_LIBFT)))

OBJF		=	.cache_exists

######################## Rules ########################

all:		$(NAME)

$(NAME):	$(OBJ_PRINTF) $(OBJ_GNL) $(OBJ_LIBFT)
