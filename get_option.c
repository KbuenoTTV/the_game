/*
**          444    222222          GGG     AAA     MM   MM EEEEE
**         4444        222       GG       AA AA    MMMMMMM EE
**        44 44          22      GG  G   AA   AA   MM M MM EEEEE
**       44  44          22      GG  G  AAAAAAAAA  MM   MM EE
**      44   44         22         GGG AA       AA MM   MM EEEEE
**     4444444444      22
**     4444444444     22      SS  TTTTTT UU    UU DDDD   II   OOOO
**           44      22      SS     TT   UU    UU DD  DD II  OO  OO
**           44     22        SS    TT   UU    UU DD  DD II OO    OO
**           44    222         SS   TT   UU    UU DD  DD II  OO  OO
**           44    22222222   SS    TT     UUUU   DDDD   II   OOOO
** 
** File name: get_option.c
** Made by: jchichep
** File created  on  Mon Aug 26 03:06:09 2013 by jchichep
** Last modified on  Mon Aug 26 03:06:12 2013 by jchichep
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
