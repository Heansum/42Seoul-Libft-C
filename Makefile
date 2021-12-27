# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 20:16:33 by hlim              #+#    #+#              #
#    Updated: 2021/12/27 23:12:53 by hlim             ###   ########.fr        #
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
       ft_idslphs.c \


