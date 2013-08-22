/*
** get_key.c for  in /home/chiche_j//myprintf-2016ed-2015s-2017si-chiche_j
** 
** Made by jonathan chicheportiche
** Login   <chiche_j@epitech.net>
** 
** Started on  Thu Aug 22 23:34:56 2013 jonathan chicheportiche
** Last update Fri Aug 23 00:02:58 2013 jonathan chicheportiche
*/

#include	<unistd.h>
#include	"direction.h"

int	get_key()
{
    char	 tab[3];

  tab[0] = 0;
  tab[1] = 0;
  tab[2] = 0;
  read(0, tab, 1);
  if (tab[0] == 27)
    {
      read(0, tab + 1, 1);
      if (tab[1] == 91)
	{
	  read(0, tab + 2, 1);
	}
    }
  if (tab[0] == 27 && tab[1] == 91 && tab[2] == 66)
    return (DOWN);
  if (tab[0] == 27 && tab[1] == 91 && tab[2] == 65)
    return (UP);
  if (tab[0] == 27 && tab[1] == 91 && tab[2] == 68)
    return (LEFT);
  if (tab[0] == 27 && tab[1] == 91 && tab[2] == 67)
    return (RIGHT);
  return ((int)tab[0]);
}
