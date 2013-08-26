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
** File name: get_key.c
** Made by: jchichep
** File created  on  Mon Aug 26 02:29:58 2013 by jchichep
** Last modified on  Mon Aug 26 17:20:28 2013 by jchichep
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
