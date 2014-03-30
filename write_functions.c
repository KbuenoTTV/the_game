/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/30 12:27:23 by jchichep          #+#    #+#             */
/*   Updated: 2014/03/30 12:30:12 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
