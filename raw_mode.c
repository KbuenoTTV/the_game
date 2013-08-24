/*
** raw_mode.c for  in /home/chiche_j//THE_GAME
** 
** Made by jonathan chicheportiche
** Login   <chiche_j@epitech.net>
** 
** Started on  Fri Aug 23 16:19:41 2013 jonathan chicheportiche
** Last update Fri Aug 23 16:24:48 2013 jonathan chicheportiche
*/

#include	<termios.h>
#include	<signal.h>
#include	"write_functions.h"

void		catch_sigint(int sig)
{
  sig = sig;
  ft_putstr("Please use q to quit the program\n");
}

void		unset_raw_mode()
{
  struct termios t;

  tcgetattr(0, &t); 
  t.c_lflag += ICANON;
  t.c_lflag += ECHO;
  t.c_cc[VMIN] = 1;
  t.c_cc[VTIME] = 0;
  tcsetattr(0, TCSANOW, &t);
}

void		set_raw_mode()
{
  struct termios t;

  tcgetattr(0, &t); 
  t.c_lflag &= ~ICANON;
  t.c_lflag &= ~ECHO;
  t.c_cc[VMIN] = 1;
  t.c_cc[VTIME] = 0;
  tcsetattr(0, TCSANOW, &t);
  signal(SIGINT, catch_sigint);
}
