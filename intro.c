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
** File name: intro.c
** Made by: jchichep
** File created  on  Mon Aug 26 03:06:20 2013 by jchichep
** Last modified on  Mon Aug 26 03:06:23 2013 by jchichep
*/

#include	<stdlib.h>
#include	"option.h"
#include	"write_functions.h"

int		get_key(void);
int		get_option(int, t_option*);

static t_option	g_option[]=
  {
    {'1', go_function_1},
    {'2', go_function_2},
    {'3', go_function_3},
    {'4', go_function_4},
    {'i', go_inv},
    {'q', go_quit},
    {'u', go_use},
    {0, NULL},
  };

void	go_function_1()
{
  ft_delay_putstr("tu vas au nord\n", 50000);
}

void	go_function_2()
{
  ft_delay_putstr("tu vas a l'est\n", 50000);
}

void	go_function_3()
{
  ft_delay_putstr("tu vas au sud\n", 50000);
}

void	go_function_4()
{
  ft_delay_putstr("tu vas a l'ouest\n", 50000);
}

void		intro(void)
{
  int		choice;

  choice = 0;
  ft_delay_putstr("Choisi une direction:\n", 50000);
  ft_delay_putstr("Appuie sur 1 pour le nord\n", 50000);
  ft_delay_putstr("Appuie sur 2 pour l'est\n", 50000);
  ft_delay_putstr("Appuie sur 3 pour le sud\n", 50000);
  ft_delay_putstr("Appuie sur 4 pour l'ouest\n", 50000);
  while (!(choice >= '1' && choice <= '4'))
    {
      choice = get_key();
      get_option(choice, g_option);
    }
}
