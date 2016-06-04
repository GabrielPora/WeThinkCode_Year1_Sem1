# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggroener <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/03 14:06:43 by ggroener          #+#    #+#              #
#    Updated: 2016/06/03 14:58:10 by ggroener         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
SRC = {main,draw,calculus,mlx,parsing,utils,zoom_option}.c                   
SRC += {make_point,move_option,projection,mouse,rotate}.c                        
SRC += {display,hook}.c
OBJECTS = $(SRC:.c=.o)
CFLAG = -Wall -Werror -Wextra
ATTACH = -L libft/ -lft -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

quick: clean $(NAME)
	@echo "Made Quickly"

lib:
	@make -C libft/ fclean
	@make -C libft/

$(NAME): lib
	@gcc $(CFLAG) -I libft/ -c $(SRC)
	@gcc $(CFLAG) -o $(NAME) $(OBJECTS) $(ATTACH)
	@echo "fdf Successfully Compiled"

clean:
	@/bin/rm -f $(OBJECTS)
	@make -C libft/ clean

fclean: clean
	@/bin/rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all

norme:
	@clear
	@norminette $(FILES)
