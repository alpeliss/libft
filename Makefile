SRCDIR	= ./srcs/
SRCNAME	= 	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_atoi.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_strchr.c		\
			ft_strlen.c		\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_strtrim.c	\
			ft_strjoin.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strdup.c		\
			ft_calloc.c		\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memmove.c

SRCS	= ${addprefix ${SRCDIR}, ${SRCNAME}}

INCDIR	=./includes/

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror


.c.o:
		${CC} ${CFLAGS} -I ${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

all: 		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

c:		all clean

.PHONY:		clean fclean re all
