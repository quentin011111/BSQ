##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

PRINC	=	bsq.c

SRC		=		lib/my/my_putchar.c \
				lib/my/my_putnbr.c \
				lib/my/my_putstr.c \
				lib/my/my_strlen.c \
				lib/my/hexa_convertor.c \
				lib/my/convertor_binaire.c \
				lib/my/convert_octal.c \
				lib/my/my_putnbr_long.c \
				lib/my/my_non_printable_str.c \
				lib/my/my_find.c \
				lib/my/hexa_convertor_up.c \
				lib/my/my_putnbr_long_unsigned.c \
				lib/my/cond1.c \
				lib/my/cond2.c \
				lib/my/cond3.c \
				lib/my/cond4.c \
				lib/my/my_abs.c \
				lib/my/my_printf.c \
				lib/my/my_putfloat.c \
				lib/my/my_getnbr.c \
				lib/my/map_2d.c \
				lib/my/algorythme.c \
				lib/my/draw_map.c \
				lib/my/error_gestion.c


CFLAGS	+=	-Iinclude -Wall -Wextra -g3

OBJ	=	$(SRC:.c=.o)


NAMELIB	=	libmy.a

#CFLAGS	=	-Iinclude -Wall -Wextra -g3

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAMELIB) $(OBJ)
			gcc -o $(NAME) $(CFLAGS) $(PRINC) $(NAMELIB)


clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		rm -f $(NAMELIB)

re: 	fclean all

.PHONY: all clean fclean re
