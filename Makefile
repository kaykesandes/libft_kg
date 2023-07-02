NAME = libft.a

SRC = ft_bzero.c    ft_memchr.c  ft_memcpy.c \
	  ft_memset.c  ft_strchr.c  ft_strdup.c \
	  ft_strlen.c   ft_strncpy.c  ft_memccpy.c \
	  ft_memcmp.c  ft_memmove.c  ft_strcat.c \
	  ft_strcpy.c  ft_strlcat.c  ft_strncat.c \
	  ft_strrchr.c \

OBJS = ${SRC:.c=.o}
CC = cc 
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h 
MAIN = main 
TEST_FOLDER = tests

all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
		ar -rcs ${NAME} ${OBJS} ${HEADER}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS} libft.so *.out

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean all fclean re