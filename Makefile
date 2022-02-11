NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFlAGS = crs

INCLUDE = ./libft.h

SRCS = ft_atoi.c	\
       ft_bzero.c 	\
       ft_calloc.c	\
       ft_isalpha.c	\
       ft_isalnum.c	\
       ft_isascii.c	\
       ft_isdigit.c	\
       ft_islower.c	\
       ft_isupper.c	\
       ft_isprint.c	\
       ft_itoa.c	\
       ft_memchr.c	\
       ft_memcmp.c	\
       ft_memcpy.c	\
       ft_memmove.c	\
       ft_memset.c	\
       ft_putchar_fd.c	\
       ft_putendl_fd.c	\
       ft_putnbr_fd.c	\
       ft_putstr_fd.c	\
       ft_strchr.c	\
       ft_strdup.c	\
       ft_strjoin.c	\
       ft_strlcat.c	\
       ft_strlcpy.c	\
       ft_strlen.c	\
       ft_strncmp.c	\
       ft_strmapi.c	\
       ft_strrchr.c	\
       ft_strtrim.c	\
       ft_strnstr.c	\
       ft_striteri.c	\
       ft_substr.c	\
       ft_tolower.c	\
       ft_toupper.c	\
       ft_split.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	    $(AR) $(ARFLAGS) $@ $^

$(OBJS) : $(INCLUDE)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

re : fclean all

.PHONY: fclean all clean re
