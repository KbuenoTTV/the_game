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
** File name: main.c
** Made by: jchichep
** File created  on  Mon Aug 26 03:06:31 2013 by jchichep
** Last modified on  Mon Aug 26 03:06:34 2013 by jchichep
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
