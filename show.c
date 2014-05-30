/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 19:44:24 by jchichep          #+#    #+#             */
/*   Updated: 2014/05/30 19:40:09 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<ncurses.h>
#include		"perso.h"
#include		"function.h"

void			show_carac(t_carac *carac, t_argent *argent)
{
	init_ncurse();
	mvprintw(0, 0, "STATS:\n");
	attron(COLOR_PAIR(1));
	mvprintw(1, 0, "Force -> ");
	attroff(COLOR_PAIR(1));
	printw("%d\n", carac->force);
	attron(COLOR_PAIR(2));
	mvprintw(2, 0, "Dexterite -> ");
	attroff(COLOR_PAIR(2));
	printw("%d\n", carac->dexterite);
	attron(COLOR_PAIR(3));
	mvprintw(3, 0, "Intelligence -> ");
	attroff(COLOR_PAIR(3));
	printw("%d\n", carac->intelligence);
	attron(COLOR_PAIR(4));
	mvprintw(4 ,0, "Charisme -> ");
	attroff(COLOR_PAIR(4));
	printw("%d\n", carac->charisme);
	attron(COLOR_PAIR(5));
	mvprintw(5, 0, "Sagesse -> ");
	attroff(COLOR_PAIR(5));
	printw("%d\n\n", carac->sagesse);
	attron(COLOR_PAIR(14));
	mvprintw(7, 0, "PP -> %d\n", argent->pp);
	attroff(COLOR_PAIR(14));
	attron(COLOR_PAIR(12));
	mvprintw(8, 0, "PO -> %d\n", argent->po);
	attroff(COLOR_PAIR(12));
	attron(COLOR_PAIR(10));
	mvprintw(9, 0, "PA -> %d\n", argent->pa);
	attroff(COLOR_PAIR(10));
	attron(COLOR_PAIR(11));
	mvprintw(10, 0, "PC -> %d\n", argent->pc);
	attroff(COLOR_PAIR(11));
	refresh();
	getch();
	endwin();
}
