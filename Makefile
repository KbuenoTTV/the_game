##
## Makefile for  in /home/chiche_j//Lem_test
## 
## Made by jonathan chicheportiche
## Login   <chiche_j@epitech.net>
## 
## Started on  Thu Sep 20 10:54:33 2012 jonathan chicheportiche
## Last update Sun Sep 30 23:00:46 2012 jonathan chicheportiche
##


NAME	=	the_game

PWD	=	$(shell pwd)

SRCDIR	=	$(PWD)

OBJDIR	=	$(PWD)

ECHO	=	/bin/echo

SRC	=	  main.c \
		  write_functions.c \
		  get_key.c \
		  option.c \
		  raw_mode.c \
		  intro.c \
		  get_option.c

NOM	=	$(basename $(notdir $(SRC)))

OBJ	=	$(addprefix $(OBJDIR)/, $(addsuffix .o, $(NOM)))

CFLAGS	+=	-Wall -Wextra -Werror -ansi -pedantic

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
	@$(ECHO) -en "\033[0m[CC] : Compiling ...$(notdir $<)\r"
	@gcc -c $(CFLAGS) -o $@ $< \
	&& $(ECHO) -en "\033[1;30m[CC] : Compiled $(notdir $<) [\033[0;32mOk\033[1;30m]\033[0m\n" \
	|| $(ECHO) -en "\033[1;30m[CC] : Compiled $(notdir $<) [\033[0;5;31mError\033[0;1;30m]\033[0m\n"

$(NAME):	$(OBJ)
	@$(ECHO) -e "\033[1;30m[CFLAGS] : $(CFLAGS)\033[0m"
	@gcc $(OBJ) $(CFLAGS) -o $(NAME)
	@$(ECHO) -e "\033[1;30m[LINKING] : $(basename $(notdir $(addsuffix .o, $(OBJ))))\033[0m"
	@$(ECHO) -e ' \033[0;31m.o0*0o.\033[0;1;31mCompilation DONE\033[0;31m.o0*0o.\033[0m'

all:		$(NAME)

clean:
	@rm -f *~ */*~ \#*\# */\#*\#
	@rm -f $(OBJ)
	@$(ECHO) -e "\033[1;30m[RM] : erasing *~ and #*#\033[00m"
	@$(ECHO) -e "\033[1;30m[RM] : erasing $(basename $(notdir $(addsuffix .o, $(OBJ))))\033[00m"
	@$(ECHO) -e '    \033[0;33m.o0*0o.\033[0;1;33mClean DONE\033[0;33m.o0*0o.\033[00m'

fclean:		clean
	@rm -f $(NAME)
	@$(ECHO) -e "\033[1;30m[RM] : erasing $(NAME)\033[00m"
	@$(ECHO) -e '   \033[0;32m.o0*0o.\033[0;1;32mFclean DONE\033[0;32m.o0*0o.\033[00m'

re:		fclean all

bin:		all clean

allx:		$(NAME)
	@./$(NAME)

rex:		re
	@./$(NAME)

.PHONY:	all clean fclean re bin allx rex
