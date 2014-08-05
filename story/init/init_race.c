/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_race.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 01:57:01 by jchichep          #+#    #+#             */
/*   Updated: 2014/08/05 03:21:40 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"perso.h"
#include		"function.h"
#include		<ncurses.h>

static void		aff_carac(int i, int line, char *str)
{
	(line != i) ? attron(COLOR_PAIR(i)) : attron(COLOR_PAIR(i + 10));
	mvprintw(i, 0, "%s\n", str);
	(line != i) ? attroff(COLOR_PAIR(i)) : attroff(COLOR_PAIR(i + 10));
}

static void		show_actual(int line)
{
	mvprintw(0, 0, "Choose your race:\n");
	aff_carac(1, line, "ORC");
	aff_carac(2, line, "DEMI ORC");
	aff_carac(3, line, "HUMAIN");
	aff_carac(4, line, "DEMI_ELFE");
	aff_carac(5, line, "ELFE\n");
	mvprintw(7, 0, "Race will have impact in some situation\n\n\n");
}

void			init_race(t_race *race)
{
	int line;
	int ch;

	ch = 0;
	line = 1;
	init_ncurse();
	while (ch != '\n')
	{
		if (ch == KEY_UP)
			line = (line - 2 + 5) % 5 + 1;
		if (ch == KEY_DOWN)
			line = line % 5 + 1;
		show_actual(line);
		ch = getch();
		refresh();
	}
	endwin();
	*race = line;
}
