/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ncurse.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/14 22:59:22 by jchichep          #+#    #+#             */
/*   Updated: 2014/05/15 13:20:01 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"perso.h"
#include		<ncurses.h>

static void		remove_one(int *a, int *b, int *c, int *d, int *e, int line, int *total)
{
	if (line == 1 && *a > 0)
		*a -= 1;
	else if (line == 2 && *b > 0)
		*b -= 1;
	else if (line == 3 && *c > 0)
		*c -= 1;
	else if (line == 4 && *d > 0)
		*d -= 1;
	else if (line == 5 && *e > 0)
		*e -= 1;
	else
		return ;
	*total += 1;
}

static void		add_one(int *a, int *b, int *c, int *d, int *e, int line, int *total)
{
	if (*total == 0)
		return ;
	if (line == 1)
		*a += 1;
	if (line == 2)
		*b += 1;
	if (line == 3)
		*c += 1;
	if (line == 4)
		*d += 1;
	if (line == 5)
		*e += 1;
	*total -= 1;
}

void init_carac(t_carac *carac)
{
	int line;
	int total;
	int a;
	int b;
	int c;
	int d;
	int e;
	int ch;

	total = 60;
	line = 1;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	initscr();
	raw();
	start_color();
	keypad(stdscr, TRUE);
	noecho();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_YELLOW, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_CYAN, COLOR_BLACK);
	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(11, COLOR_BLACK, COLOR_RED);
	init_pair(12, COLOR_BLACK, COLOR_YELLOW);
	init_pair(13, COLOR_BLACK, COLOR_GREEN);
	init_pair(14, COLOR_BLACK, COLOR_CYAN);
	init_pair(15, COLOR_BLACK, COLOR_MAGENTA);
	while (ch != '\n')
	{
		mvprintw(0, 0, "Change your character stat:\n");
		if (ch == KEY_UP)
			line = (line - 2 + 5) % 5 + 1;
		if (ch == KEY_DOWN)
			line = line % 5 + 1;
		if (ch == KEY_LEFT)
			remove_one(&a, &b, &c, &d, &e, line, &total);
		if (ch == KEY_RIGHT)
			add_one(&a, &b, &c, &d, &e, line, &total);
		(line != 1) ? attron(COLOR_PAIR(1)) : attron(COLOR_PAIR(11));
		mvprintw(1,0, "FORCE = %d (%d)\n", a, a / 2 - 5);
		(line != 1) ? attroff(COLOR_PAIR(1)) : attroff(COLOR_PAIR(11));
		(line != 2) ? attron(COLOR_PAIR(2)) : attron(COLOR_PAIR(12));
		mvprintw(2,0, "DEXTERITE = %d (%d)\n", b, b / 2 - 5);
		(line != 2) ? attroff(COLOR_PAIR(2)) : attroff(COLOR_PAIR(12));
		(line != 3) ? attron(COLOR_PAIR(3)) : attron(COLOR_PAIR(13));
		mvprintw(3,0, "CONSTITUTION = %d (%d)\n", c, c / 2 - 5);
		(line != 3) ? attroff(COLOR_PAIR(3)) : attroff(COLOR_PAIR(13));
		(line != 4) ? attron(COLOR_PAIR(4)) : attron(COLOR_PAIR(14));
		mvprintw(4,0, "INTELLIGENCE = %d (%d)\n", d, d / 2 - 5);
		(line != 4) ? attroff(COLOR_PAIR(4)) : attroff(COLOR_PAIR(14));
		(line != 5) ? attron(COLOR_PAIR(5)) : attron(COLOR_PAIR(15));
		mvprintw(5,0, "SAGESSE = %d (%d)\n", e, e / 2 - 5);
		(line != 5) ? attroff(COLOR_PAIR(5)) : attroff(COLOR_PAIR(15));
		mvprintw(6, 0, "You have %d points left. Actually, you'll start the adventure with %d PO\n",total, total * 10 + 10);
		mvprintw(8, 0, "We highly recommend to use 45 to 60 attributes points\nUse arrow keys to change values and press enter to confirm.\n");
		ch = getch();
		refresh();
	}
	endwin();
	carac->force = a;
	carac->dexterite = b;
	carac->intelligence = c;
	carac->charisme = d;
	carac->sagesse = e;
}
