/*
** get_option.c for  in /home/chiche_j//THE_GAME
** 
** Made by jonathan chicheportiche
** Login   <chiche_j@epitech.net>
** 
** Started on  Fri Aug 23 17:17:36 2013 jonathan chicheportiche
** Last update Fri Aug 23 17:23:38 2013 jonathan chicheportiche
*/

#include	"option.h"

int	get_option(int key, t_option *g_option)
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
