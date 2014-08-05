/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ncurse.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 22:59:22 by jchichep          #+#    #+#             */
/*   Updated: 2014/08/05 02:08:22 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"perso.h"
#include		"function.h"
#include		<ncurses.h>

static void		remove_one(int tab[5], int line, int *total)
{
	if (tab[line - 1] > 0)
	{
		tab[line - 1] -= 1;
		*total += 1;
	}
}

static void		add_one(int tab[5], int line, int *total)
{
	if (*total > 0)
	{
		tab[line - 1] += 1;
		*total -= 1;
	}
}

static void		aff_carac(int i, int line, char *str, int tab[5])
{
	(line != i) ? attron(COLOR_PAIR(i)) : attron(COLOR_PAIR(i + 10));
	mvprintw(i, 0, "%s = %d (%d)\n",str, tab[i - 1], tab[i - 1] / 2 - 5);
	(line != i) ? attroff(COLOR_PAIR(i)) : attroff(COLOR_PAIR(i + 10));
}

static void		show_actual(int line, int tab[5], int total)
{
	mvprintw(0, 0, "Change your character stat:\n");
	aff_carac(1, line, "FORCE", tab);
	aff_carac(2, line, "DEXTERITE", tab);
	aff_carac(3, line, "CONSTITUTION", tab);
	aff_carac(4, line, "INTELLIGENCE", tab);
	aff_carac(5, line, "SAGESSE", tab);
	mvprintw(6, 0, "You have %d points left. Actually, you'll start the \
adventure with %d PO\n", total, total * 10 + 10);
	mvprintw(8, 0, "We highly recommend to use 45 to 60 attributes points\n\
Use arrow keys to change values and press enter to confirm.\n");
}

void init_carac(t_carac *carac, t_argent *argent)
{
	int line;
	int total;
	int tab[5] = {0};
	int ch;

	total = 60;
	ch = 0;
	line = 1;
	init_ncurse();
	while (ch != '\n')
	{
		if (ch == KEY_UP)
			line = (line - 2 + 5) % 5 + 1;
		if (ch == KEY_DOWN)
			line = line % 5 + 1;
		if (ch == KEY_LEFT)
			remove_one(tab, line, &total);
		if (ch == KEY_RIGHT)
			add_one(tab, line, &total);
		show_actual(line, tab, total);
		ch = getch();
		refresh();
	}
	endwin();
	argent->po = total * 10 + 10;
	carac->force = tab[0];
	carac->dexterite = tab[1];
	carac->intelligence = tab[2];
	carac->charisme = tab[3];
	carac->sagesse = tab[4];
}
