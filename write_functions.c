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
** File name: write_functions.c
** Made by: jchichep
** File created  on  Mon Aug 26 03:07:48 2013 by jchichep
** Last modified on  Mon Aug 26 03:07:51 2013 by jchichep
*/

#include	<unistd.h>
#include	"color.h"

void		ft_putchar(char c)
{
  (void)write(1, &c, 1);
}

void		ft_delay_putchar(char c, unsigned int delay)
{
  (void)write(1, &c, 1);
  usleep(delay);
}

void		ft_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      ft_putchar(str[i++]);
    }
}

void		ft_delay_putstr(char *str, unsigned int delay)
{
  int		i;

  i = 0;
  while (str[i])
    {
      ft_delay_putchar(str[i++], delay);
    }
}

void		ft_putstr_color(char *str, char *color)
{
  ft_putstr(color);
  ft_putstr(str);
  ft_putstr(NORMAL);
}

void		ft_delay_putstr_color(char *str, char *color, unsigned int delay)
{
  ft_putstr(color);
  ft_delay_putstr(str, delay);
  ft_putstr(NORMAL);
}
