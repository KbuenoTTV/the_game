/*
** main.c for  in /home/chiche_j//THE_GAME
** 
** Made by jonathan chicheportiche
**
** 
** Started on  Tue Aug 20 01:59:18 2013 jonathan chicheportiche
** Last update Fri Aug 23 00:06:49 2013 jonathan chicheportiche
*/

#include	<unistd.h>
#include	<termios.h>
#include	<stdio.h>
#include	"color.h"
#include	"write_functions.h"
#include	"direction.h"
#include	"option.h"

int		get_key();

t_option	g_option[]=
  {
    {UP, go_up},
    {DOWN, go_down},
    {LEFT, go_left},
    {RIGHT, go_right},
    {'i', go_inv},
    {'q', go_quit},
    {'u', go_use},
    {0, NULL},
  };

int		get_option(int key)
{
  int		i;

  i = 0;
  while (g_option[i].key)
    {
      if (g_option[i].key == key)
	{
	  g_option[i].ptr_func();
	  return (0);
	}
      i++;
    }
  if (g_option[i].key == 0)
    {
      return (-1);
    }
  return (0);
}

int main()
{
  struct termios t;

  tcgetattr(0, &t);
  t.c_lflag &= ~ICANON;
  t.c_lflag &= ~ECHO;
  t.c_cc[VMIN] = 1;
  t.c_cc[VTIME] = 0;
  tcsetattr(0, TCSANOW, &t);

  while (get_option(get_key()) == -1);
  /* t.c_lflag += ICANON; */
  /* t.c_lflag += ECHO; */
  /* tcsetattr(0, TCSANOW, &t); */
  return (0);
}
