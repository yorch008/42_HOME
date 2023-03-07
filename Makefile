LIB = ar rcs
NAME = libft.a
MY_SOURCES = ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_substr.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c
MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = gcc

CFLAGS += -Wall -Wextra -Werror -I.

$(NAME): $(MY_OBJECTS) libft.h
	$(LIB) $(NAME) $(MY_OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
	
all: $(NAME)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re