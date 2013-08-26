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
** File name: raw_mode.c
** Made by: jchichep
** File created  on  Mon Aug 26 03:07:27 2013 by jchichep
** Last modified on  Mon Aug 26 17:23:44 2013 by jchichep
*/

#include	<termios.h>
#include	<signal.h>
#include	"write_functions.h"

void		catch_sigint(int sig)
{
  sig = sig;
  ft_putstr("Please use q to quit the program\n");
}

void		unset_raw_mode()
{
  struct termios t;

  tcgetattr(0, &t);
  t.c_lflag += ICANON;
  t.c_lflag += ECHO;
  t.c_cc[VMIN] = 1;
  t.c_cc[VTIME] = 0;
  tcsetattr(0, TCSANOW, &t);
}

void		set_raw_mode()
{
  struct termios t;

  tcgetattr(0, &t);
  t.c_lflag &= ~ICANON;
  t.c_lflag &= ~ECHO;
  t.c_cc[VMIN] = 1;
  t.c_cc[VTIME] = 0;
  tcsetattr(0, TCSANOW, &t);
  signal(SIGINT, catch_sigint);
}
