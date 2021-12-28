# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 20:16:33 by hlim              #+#    #+#              #
#    Updated: 2021/12/29 04:02:47 by hlim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFAlAGS = crs

INCLUDE = ./libft.h

SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_idslpha.c \
       ft_isalnum.c	\
       ft_isascii.c	\
       ft_isdigit.c	\
       ft_islower.c	\
       ft_isupper.c	\
       ft_isprint.c	\


