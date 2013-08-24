/*
** main.c for  in /home/chiche_j//THE_GAME
** 
** Made by jonathan chicheportiche
**
** 
** Started on  Tue Aug 20 01:59:18 2013 jonathan chicheportiche
** Last update Fri Aug 23 17:21:20 2013 jonathan chicheportiche
*/

#include	<unistd.h>
#include	<stdio.h>
#include	"color.h"
#include	"write_functions.h"
#include	"direction.h"
#include	"option.h"

int		get_key(void);
int		get_option(int, t_option*);
void		set_raw_mode(void);

static t_option	g_option[]=
  {
    {UP, go_up},
    {DOWN, go_down},
    {LEFT, go_left},
    {RIGHT, go_right},
    {'i', go_inv},
    {'q', go_quit},
    {'u', go_use},
    {'s', intro},
    {0, NULL},
  };

int main()
{
  set_raw_mode();
  while (2)
    get_option(get_key(), g_option);
  return (0);
}
