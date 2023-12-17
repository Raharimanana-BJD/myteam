SRCS = main.c ft_extract_key.c ft_get_keys.c ft_get_values.c ft_extract_value.c ft_get_line.c ft_putstr.c ft_fetch_dict.c ft_get_lines.c ft_strlen.c ft_strcmp.c ft_key_match.c ft_to_letter.c

OBJS = ${SRCS:.c=.o}

NAME = rush-02

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
