# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 20:20:52 by joseoliv          #+#    #+#              #
#    Updated: 2024/10/11 03:53:31 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =
char/ft_isalpha.c char/ft_isdigit.c char/ft_isalnum.c char/ft_isascii.c char/ft_isprint.c char/ft_tolower.c char/ft_toupper.c
#char directiory
#-------------------------------------------------------------------------------------------------------------------------------------------------#

get_next_line/get_next_line_utils.c get_next_line/get_next_line.c
#get_next_line directory
#-------------------------------------------------------------------------------------------------------------------------------------------------#

input_output/ft_putchar_fd.c input_output/ft_putendl_fd.c input_output/ft_putnbr_fd.c input_output/ft_putstr_fd.c
input_output/ft_printf/ft_printf.c input_output/ft_printf/write_funcs.c input_output/ft_printf/nbr_funcs.c
#input_output directoty
#-------------------------------------------------------------------------------------------------------------------------------------------------#

memory/ft_bzero.c memory/ft_calloc.c memory/ft_memchr.c memory/ft_memcmp.c memory/ft_memcpy.c memory/ft_memmove.c memory/ft_memset.c
#memory directory
#-------------------------------------------------------------------------------------------------------------------------------------------------#

string/ft_split.c string/ft_strchr.c string/ft_strdup.c string/ft_striteri.c string/ft_strjoin.c string/ft_strlcat.c string/ft_strlcpy.c
string/ft_strlen.c string/ft_strmapi.c string/ft_strncmp.c string/ft_strnstr.c string/ft_strrchr.c string/ft_strtrim.c string/ft_substr.c
string/ft_strjoin_free.c
#string directory
#-------------------------------------------------------------------------------------------------------------------------------------------------#

utility/ft_atoi_int.c utility/ft_itoa.c utility/ft_pow.c utility/ft_atoi_double
#utility directory
#-------------------------------------------------------------------------------------------------------------------------------------------------#

OBJS = $(SRCS:.c=.o)
CC=cc
FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

bonus: $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
