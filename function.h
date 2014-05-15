/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 08:25:55 by jchichep          #+#    #+#             */
/*   Updated: 2014/05/15 13:34:13 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

/* INIT FOR CARAC init.c */

void			init_carac(t_carac *carac);
void			init_argent(t_argent *argent);
void			init_info(t_info *info);
void			init_main(t_main *main);
void			init_equip(t_equip *equip);

void			set_obj_to_null(t_obj *obj);

/* RAW MODE raw_mode.c */

void			unset_raw_mode(void);
void			set_raw_mode(void);

/* WRITE FUNCTIONS write_functions.c */

void			ft_putchar(char c);
void			ft_delay_putchar(char c, unsigned int delay);
void			ft_putstr(char *str);
void			ft_delay_putstr(char *str, unsigned int delay);
void			ft_putstr_color(char *str, char *color);
void			ft_delay_putstr_color(char *str, char *color, unsigned int delay);
void			ft_putnbr(int nb);

/* TEMPORARY FUNCTIONS */

void			show_carac(t_carac *carac); /* show.c */

#endif
