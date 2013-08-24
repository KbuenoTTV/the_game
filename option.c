/*
** option.c for  in /home/chiche_j//myprintf-2016ed-2015s-2017si-chiche_j
** 
** Made by jonathan chicheportiche
** Login   <chiche_j@epitech.net>
** 
** Started on  Thu Aug 22 23:57:51 2013 jonathan chicheportiche
** Last update Fri Aug 23 13:41:08 2013 jonathan chicheportiche
*/

#include	<stdlib.h>
#include	"color.h"
#include	"write_functions.h"

int		get_key();
void		unset_raw_mode();

void		go_up()
{
  ft_putstr_color("You want to go up\n", RED);
}

void		go_down()
{
  ft_putstr_color("You want to go down\n", YELLOW);
}

void		go_left()
{
  ft_putstr_color("You want to go left\n", MAGENTA);
}

void		go_right()
{
  ft_putstr_color("You want to go right\n", CYAN);
}

void		go_inv()
{
  ft_putstr_color("Your inventory is empty\n", YELLOW);
  ft_putstr_color("Press i to close inventory\n", YELLOW);
  while (get_key() != 'i');
  
}

void		go_quit()
{
  int		i;

  ft_putstr("Are you sure you wanna quit ?\n");
  ft_putstr("press y for yes, n for no\n");
  while ((i = get_key()) != 'y' && i != 'n');
  if (i == 'y')
    {
      unset_raw_mode();
      exit (0);
    }
  
}

void		go_use()
{
  ft_putstr_color("use X object\n", GREEN);
}
