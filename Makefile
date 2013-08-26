##
##          444    222222          GGG     AAA     MM   MM EEEEE
##         4444        222       GG       AA AA    MMMMMMM EE
##        44 44          22      GG  G   AA   AA   MM M MM EEEEE
##       44  44          22      GG  G  AAAAAAAAA  MM   MM EE
##      44   44         22         GGG AA       AA MM   MM EEEEE
##     4444444444      22
##     4444444444     22      SS  TTTTTT UU    UU DDDD   II   OOOO
##           44      22      SS     TT   UU    UU DD  DD II  OO  OO
##           44     22        SS    TT   UU    UU DD  DD II OO    OO
##           44    222         SS   TT   UU    UU DD  DD II  OO  OO
##           44    22222222   SS    TT     UUUU   DDDD   II   OOOO
## 
## File name: Makefile
## Made by: jchichep
## File created  on  Mon Aug 26 03:06:44 2013 by jchichep
## Last modified on  Mon Aug 26 03:06:48 2013 by jchichep
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

