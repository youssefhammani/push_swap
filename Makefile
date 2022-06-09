# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 13:35:41 by yhammani          #+#    #+#              #
#    Updated: 2022/04/10 04:38:33 by yhammani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := push_swap.c\
		stack.c\
		more_stack.c\
		ft_atoi.c\
		median.c\
		1sort.c\
		md.c\
		checkarg.c\
		sort_5.c\
		ft_split.c\
		main.c\
		checkarg2.c\
		more_ps.c\
		moreft.c\
		maind.c \
		ft_strjoin.c

SRC_BONUS := checker.c \
			stack.c\
			push_swap.c\
			more_stack.c\
			ft_atoi.c\
			median.c\
			1sort.c\
			md.c\
			checkarg.c\
			sort_5.c\
			ft_split.c\
			checkarg2.c\
			more_ps.c\
			moreft.c\
			maind.c\
			checker2.c\
			ft_strjoin.c

OBJ := $(SRC:.c=.o)
OBJS_BONUS := $(SRC_BONUS:.c=.o)

CC = CC
RM = rm -rf
INC := push_swap.h
NAME := push_swap
EXEC_BONUS := checker
FLAG := -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o : %.c $(INC)
	@$(CC) $(FLAG) -c $< -o $@

bonus : $(OBJS_BONUS)
	@$(CC) $(CFLAG) $(OBJS_BONUS) -o ${EXEC_BONUS} 
	
clean :
	@$(RM) $(OBJ) $(OBJS_BONUS)
	
fclean : clean
	@$(RM) $(NAME) $(EXEC_BONUS)
	
re : fclean all

.PHONY:
	all bonus clean fclean re
