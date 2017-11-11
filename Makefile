# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 17:19:51 by ssibiya           #+#    #+#              #
#    Updated: 2017/11/10 16:01:05 by ssibiya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCCW = gcc -Wall -Wextra -Werror
HEADER = includes/pushswap.h
INCLUDES = includes/
LIBFT =  includes/libft/libft.a
NAME = push_swap
NAME1 = checker
SRC_DIR = srcs/
SRC_PS = push_swap.c
SRC_CH = checker.c
SRCS = $(SRC_DIR)/ft_asort.c \
	  $(SRC_DIR)/ft_difference.c \
	  $(SRC_DIR)/ft_dopush.c \
	  $(SRC_DIR)/ft_dorevrot.c \
	  $(SRC_DIR)/ft_dorot.c \
	  $(SRC_DIR)/ft_doswap.c \
	  $(SRC_DIR)/ft_dsort.c \
	  $(SRC_DIR)/ft_errhandler.c \
	  $(SRC_DIR)/ft_findbig.c \
	  $(SRC_DIR)/ft_findsmall.c \
	  $(SRC_DIR)/ft_getstack.c \
	  $(SRC_DIR)/ft_getlast.c \
	  $(SRC_DIR)/ft_lstlen.c \
	  $(SRC_DIR)/ft_pivot.c \
	  $(SRC_DIR)/ft_printer.c \
	  $(SRC_DIR)/ft_push.c \
	  $(SRC_DIR)/ft_revrotate.c \
	  $(SRC_DIR)/ft_rotate.c \
	  $(SRC_DIR)/ft_rr.c \
	  $(SRC_DIR)/ft_rrr.c \
	  $(SRC_DIR)/ft_smallestdiff.c \
	  $(SRC_DIR)/ft_ss.c \
	  $(SRC_DIR)/ft_store.c \
	  $(SRC_DIR)/ft_swap.c 

OBJ = ft_asort.o\
	  ft_difference.o \
	  ft_dopush.o \
	  ft_dorevrot.o \
	  ft_dorot.o \
	  ft_doswap.o \
	  ft_dsort.o \
	  ft_errhandler.o \
	  ft_findbig.o \
	  ft_findsmall.o \
	  ft_getstack.o \
      ft_getlast.o \
      ft_lstlen.o \
	  ft_pivot.o \
	  ft_printer.o \
	  ft_push.o \
	  ft_revrotate.o \
	  ft_rotate.o \
	  ft_rr.o \
	  ft_rrr.o \
	  ft_smallestdiff.o \
	  ft_ss.o \
	  ft_store.o \
	  ft_swap.o \

all : $(NAME)

$(NAME) :
	@make -C includes/libft/
	@$(GCCW) $(SRC_DIR)$(SRC_PS) $(SRCS) $(LIBFT) -o $(NAME) -I $(HEADER)
	@$(GCCW) $(SRC_DIR)$(SRC_CH) $(SRCS) $(LIBFT) -o $(NAME1) -I $(HEADER)

clean :
	@rm $(NAME)
	@rm $(NAME1)

fclean : clean
	@make fclean -C includes//libft

re : fclean
