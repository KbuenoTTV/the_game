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
** File name: option.h
** Made by: jchichep
** File created  on  Mon Aug 26 03:07:15 2013 by jchichep
** Last modified on  Mon Aug 26 03:07:18 2013 by jchichep
*/

#ifndef OPTION_H
# define OPTION_H

typedef struct	s_option
{
  int		key;
  void		(*ptr_func)();
}		t_option;

void		go_function_1();
void		go_function_2();
void		go_function_3();
void		go_function_4();
void		intro();
void		intro();
void		intro();
void		go_up();
void		go_down();
void		go_left();
void		go_right();
void		go_inv();
void		go_quit();
void		go_use();
void		intro();

#endif /* !OPTION_H */
