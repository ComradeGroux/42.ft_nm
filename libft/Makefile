# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 14:09:53 by vgroux            #+#    #+#              #
#    Updated: 2025/05/14 13:31:24 by vgroux           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =         gcc
CFLAGS =     -Wall -Wextra -Werror
RM =         rm -f

DIR_H = ./
DIR_S =	srcs/
CREATE_DIR_O = @mkdir -p objs
DIR_O =	objs/

SRCS_LIST =	ft_atoi.c \
			ft_atof.c \
			ft_atol.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_free_arr.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isnegpos.c \
			ft_isprint.c \
			ft_isspace.c \
			ft_itoa.c \
			ft_lst_free.c \
			ft_lst_rm.c \
			ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstsize_bonus.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_printf_ptr.c \
			ft_printf_utils.c \
			ft_printf.c \
			ft_printerr_ptr.c \
			ft_printerr_utils.c \
			ft_printerr.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strcmp_uncase.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtocase.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_ulltoa_base.c \
			get_next_line_bonus.c \
			get_next_line_utils_bonus.c

SRCS = 		${addprefix ${DIR_S}, ${SRCS_LIST}}

OBJS =		${SRCS:${DIR_S}%.c=${DIR_O}%.o}


NAME =     libft.a

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

${DIR_O}%.o:${DIR_S}%.c
	@printf "\033[38;5;240m"
	@mkdir -p ${DIR_O}
	${CC} ${CFLAGS} -g -I ${DIR_H} -o $@ -c $<

clean:
	${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
