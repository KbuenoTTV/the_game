#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 16:20:35 by jchichep          #+#    #+#              #
#    Updated: 2014/08/05 02:11:23 by jchichep         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= noname

SRC			= main.c \
			  init.c \
			  init_curse.c \
			  init_stat.c \
			  init_race.c \
			  raw_mode.c \
			  set_obj.c \
			  show.c \
			  write_functions.c

SRCDIR		= .

HEADDIR		= -I./includes

OBJ			= $(addprefix $(OBJDIR)/, $(addsuffix .o, $(NOM)))

NOM			= $(basename $(notdir $(SRC)))

OBJDIR		= ./obj

CC			= /usr/bin/gcc

CFLAGS		= -Wall -Wextra -Werror

LIB			= -lncurses

RM			= rm -f

ECHO		= echo

all			: $(NAME)

main		: $(OBJ)
	@$(ECHO) "\033[0;32m> MAIN Compiled\033[0m"
	@$(CC) -o $(NAME) $(OBJ) $(HEADDIR) $(LIB)

$(NAME)		: $(OBJ)
	@$(ECHO) "\033[0;32m> MAIN Compiled\033[0m"
	@$(CC) -o $(NAME) $(OBJ) $(HEADDIR) $(LIB)

$(OBJDIR)/%.o		: $(SRCDIR)/%.c
	@test -d $(OBJDIR) || mkdir $(OBJDIR)
	@$(CC) $(CFLAGS) $(HEADDIR) $(LIB) -c -o $@ $< \
	&& $(ECHO) "\033[1;30m[CC] : Compiled $(notdir $<) \
	[\033[0;32mOk\033[1;30m]\033[0m" \
	|| $(ECHO) "\033[1;30m[CC] : Compiled $(notdir $<) \
	[\033[0;7;31mError\033[0;1;30m]\033[0m"

clean		:
	@$(RM) $(OBJ)
	@$(RM) -r $(OBJDIR)
	@$(ECHO) "\033[0;34m> Main Directory cleaned\033[0m"

fclean		: clean
	@$(RM) $(NAME)
	@$(ECHO) "\033[0;35m> Binary removed\033[0m"

re		: fclean all

bin		: all clean

.PHONY	: all clean fclean re bin
