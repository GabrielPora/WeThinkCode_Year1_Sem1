# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehansman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/10 12:36:35 by ehansman          #+#    #+#              #
#    Updated: 2016/07/10 12:36:37 by ehansman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_PATH = ./src/

INCLUDES = /includes/libft.h

SRC = $(SRC_PATH)ft_strlen.c	\
	  $(SRC_PATH)ft_putstr.c	\
	  $(SRC_PATH)ft_strdup.c	\
	  $(SRC_PATH)ft_strcpy.c	\
	  $(SRC_PATH)ft_putchar.c	\
	  $(SRC_PATH)ft_strncpy.c	\
	  $(SRC_PATH)ft_strchr.c	\
	  $(SRC_PATH)ft_strrchr.c	\
	  $(SRC_PATH)ft_strstr.c	\
	  $(SRC_PATH)ft_strnstr.c	\
	  $(SRC_PATH)ft_strcmp.c	\
	  $(SRC_PATH)ft_atoi.c		\
	  $(SRC_PATH)ft_isalpha.c	\
	  $(SRC_PATH)ft_isdigit.c	\
	  $(SRC_PATH)ft_isalnum.c	\
	  $(SRC_PATH)ft_isascii.c	\
	  $(SRC_PATH)ft_isprint.c	\
	  $(SRC_PATH)ft_toupper.c	\
	  $(SRC_PATH)ft_tolower.c	\
	  $(SRC_PATH)ft_memset.c	\
	  $(SRC_PATH)ft_bzero.c		\
	  $(SRC_PATH)ft_memcpy.c	\
	  $(SRC_PATH)ft_memccpy.c	\
	  $(SRC_PATH)ft_strnew.c	\
	  $(SRC_PATH)ft_strdel.c	\
	  $(SRC_PATH)ft_strclr.c	\
	  $(SRC_PATH)ft_striter.c	\
	  $(SRC_PATH)ft_striteri.c	\
	  $(SRC_PATH)ft_strcat.c	\
	  $(SRC_PATH)ft_strsplit.c	\
	  $(SRC_PATH)ft_strsub.c	\
	  $(SRC_PATH)ft_intcmp.c	\
	  $(SRC_PATH)ft_strjoin.c	\
	  $(SRC_PATH)ft_2charcmp.c	\
	  $(SRC_PATH)ft_3charcmp.c	\
	  $(SRC_PATH)ft_memchr.c	\
	  $(SRC_PATH)ft_memcmp.c	\
	  $(SRC_PATH)ft_rmpadding.c	\
	  $(SRC_PATH)ft_count_char.c		\
	  $(SRC_PATH)ft_check_dquote.c		\
	  $(SRC_PATH)ft_check_literal.c		\
	  $(SRC_PATH)ft_replace_literal.c	\
	  $(SRC_PATH)ft_atoi_isdigit.c		\
	  $(SRC_PATH)ft_strncmp.c			\
	  $(SRC_PATH)ft_putstr_fd.c			\
	  $(SRC_PATH)ft_putendl_fd.c

OBJ = $(SRC_PATH)ft_strlen.o	\
	  $(SRC_PATH)ft_putstr.o	\
	  $(SRC_PATH)ft_strdup.o	\
	  $(SRC_PATH)ft_strcpy.o	\
	  $(SRC_PATH)ft_putchar.o	\
	  $(SRC_PATH)ft_strncpy.o	\
	  $(SRC_PATH)ft_strchr.o	\
	  $(SRC_PATH)ft_strrchr.o	\
	  $(SRC_PATH)ft_strstr.o	\
	  $(SRC_PATH)ft_strnstr.o	\
	  $(SRC_PATH)ft_strcmp.o	\
	  $(SRC_PATH)ft_atoi.o		\
	  $(SRC_PATH)ft_isalpha.o	\
	  $(SRC_PATH)ft_isdigit.o	\
	  $(SRC_PATH)ft_isalnum.o	\
	  $(SRC_PATH)ft_isascii.o	\
	  $(SRC_PATH)ft_isprint.o	\
	  $(SRC_PATH)ft_toupper.o	\
	  $(SRC_PATH)ft_tolower.o	\
	  $(SRC_PATH)ft_memset.o	\
	  $(SRC_PATH)ft_bzero.o		\
	  $(SRC_PATH)ft_memcpy.o	\
	  $(SRC_PATH)ft_memccpy.o	\
	  $(SRC_PATH)ft_strnew.o	\
	  $(SRC_PATH)ft_strdel.o	\
	  $(SRC_PATH)ft_strclr.o	\
	  $(SRC_PATH)ft_striter.o	\
	  $(SRC_PATH)ft_striteri.o	\
	  $(SRC_PATH)ft_strcat.o	\
	  $(SRC_PATH)ft_strsplit.o	\
	  $(SRC_PATH)ft_strsub.o	\
	  $(SRC_PATH)ft_intcmp.o	\
	  $(SRC_PATH)ft_strjoin.o	\
	  $(SRC_PATH)ft_memchr.o	\
	  $(SRC_PATH)ft_2charcmp.o	\
	  $(SRC_PATH)ft_3charcmp.o	\
	  $(SRC_PATH)ft_rmpadding.o	\
	  $(SRC_PATH)ft_count_char.o		\
	  $(SRC_PATH)ft_check_dquote.o		\
	  $(SRC_PATH)ft_replace_literal.o	\
	  $(SRC_PATH)ft_check_literal.o		\
	  $(SRC_PATH)ft_memcmp.o	\
	  $(SRC_PATH)ft_atoi_isdigit.o \
	  $(SRC_PATH)ft_strncmp.o		\
      $(SRC_PATH)ft_putstr_fd.o			\
	  $(SRC_PATH)ft_putendl_fd.o

define colorecho
      @tput setaf 4
      @echo $1
      @tput sgr0
endef

all: $(NAME)

$(NAME):
	@$(call colorecho, "Crystal is preparing to make your libft")
	@$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDES)
	@$(call colorecho, "Crystal has created all your object files...")
	@mv *.o src/
	@$(call colorecho, "Crystal has successfully moved all the" \
		" object files to src/")
	@$(call colorecho, "Crystal is preparing to create your libft..")	
	@ar rc $(NAME) $(OBJ)
	@ranlib	$(NAME)
	@$(call colorecho, "Crystal has successfully created your libft")

clean:
	@rm -f $(OBJ)
	@$(call colorecho, "Crystal has removed all object files.\n")

fclean: clean
	@rm -f $(NAME)
	@$(call colorecho, "Crystal has removed the executable.\n")
	@rm -f $(INCLUDES:.h=.h.gch)

re: fclean all
	@$(call colorecho, "Crystal has successfully recompiled your" \
		" libft.\n")

norme:
	norminette $(SRC)
	@$(call colorecho, "Crystal has successfully normed all your" \
		" source files.\n")
