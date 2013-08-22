/*
** option.c for  in /home/chiche_j//myprintf-2016ed-2015s-2017si-chiche_j
** 
** Made by jonathan chicheportiche
** Login   <chiche_j@epitech.net>
** 
** Started on  Thu Aug 22 23:57:51 2013 jonathan chicheportiche
** Last update Fri Aug 23 00:08:13 2013 jonathan chicheportiche
*/

#include	"color.h"
#include	"write_functions.h"

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
  ft_putstr_color("Your inventory is empty\n", BLUE);
}

void		go_quit()
{
  ft_putstr("Are you sure you wanna quit ?\n");
}

void		go_use()
{
  ft_putstr_color("use X object\n", GREEN);
}
