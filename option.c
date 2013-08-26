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
** File name: option.c
** Made by: jchichep
** File created  on  Mon Aug 26 03:06:59 2013 by jchichep
** Last modified on  Mon Aug 26 03:07:04 2013 by jchichep
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
