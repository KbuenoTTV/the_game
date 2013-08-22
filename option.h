/*
** option.h for  in /home/chiche_j//myprintf-2016ed-2015s-2017si-chiche_j
** 
** Made by jonathan chicheportiche
** Login   <chiche_j@epitech.net>
** 
** Started on  Thu Aug 22 23:53:39 2013 jonathan chicheportiche
** Last update Fri Aug 23 00:04:12 2013 jonathan chicheportiche
*/

#ifndef OPTION_H
# define OPTION_H

typedef struct	s_option
{
  int		key;
  void		(*ptr_func)();
}		t_option;

void		go_up();
void		go_down();
void		go_left();
void		go_right();
void		go_inv();
void		go_quit();
void		go_use();

#endif /* !OPTION_H */
