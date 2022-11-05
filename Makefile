# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 13:16:49 by vfinocie          #+#    #+#              #
#    Updated: 2022/11/03 13:15:27 by vfinocie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a
SRC_DIR			= src/
OBJ_DIR			= obj/
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra -I
RM				= rm -rf
AR				= ar rcs


SRC_FILES		= ft_printf ft_printstr ft_printhex ft_checkpoint

SRC				= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ				= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all:			$(NAME)

$(NAME):		$(OBJ)
				@make -C libft							#command make in the libft directory
				@cp libft/libft.a .						#copies the libft.a created in the current directory
				@mv libft.a $(NAME)						#changes the name of the created libft.a to libftprintf.a
				@$(AR) $(NAME) $(OBJ)					#compiles the lib adding the missing objects, so the .a contains everything

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c | OBJF					#must have .c in the src directory to make .o in the obj directory | the obj directery must be created first in the OBJF rule
				@$(CC) $(CFLAGS) include -c $< -o $@	#$< first prereauisite (.c in src dir) | $@ target (.o in obj directory)

OBJF:
				@mkdir -p $(OBJ_DIR)					#-p to silence error if dir already exist

clean:
				@$(RM) $(OBJ_DIR)						#deletes the obj dir
				@make clean -C libft					#make clean in libft directory

fclean:			clean									#make clean first
				@$(RM) $(NAME)							#deletes libftprintf.a
				@$(RM) libft/libft.a					#deletes libft.a in the libft directory

re:				fclean all								#make fclean rule then all rule

.PHONY:			all clean fclean re						#allows the use of those terms as make rules
