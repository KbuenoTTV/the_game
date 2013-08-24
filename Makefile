##
## Makefile for  in /home/chiche_j//THE_GAME
##
## Made by jonathan chicheportiche
##
##
## Started on  Tue Aug 20 02:03:14 2013 jonathan chicheportiche
## Last update Fri Aug 23 17:22:32 2013 jonathan chicheportiche
##

NAME		= the_game

SRC		= main.c \
		  write_functions.c \
		  get_key.c \
		  option.c \
		  raw_mode.c \
		  intro.c \
		  get_option.c

OBJ		= $(SRC:.c=.o)

CC		= gcc

CFLAGS		= -W -Wall -Wextra -Werror

RM		= rm -f

ECHO		= echo

$(NAME)		: $(OBJ)
	-@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@$(ECHO) "\033[0;32m> Compiled\033[0m"

clean		:
	-@$(RM) $(OBJ)
	-@$(RM) *~
	-@$(RM) #*#
	@$(ECHO) "\033[0;31m> Directory cleaned\033[0m"

all		: $(NAME)

fclean		: clean
	-@$(RM) $(NAME)
	@$(ECHO) "\033[0;33m> Remove executable\033[0m"

re		: fclean all

bin		: all clean

.PHONY : all clean fclean re bin

