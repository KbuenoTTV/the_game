/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 03:08:15 by jchichep          #+#    #+#             */
/*   Updated: 2014/08/05 03:31:37 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<ncurses.h>
#include		"function.h"

void			intro(void)
{
	init_ncurse();
	mvprintw(0, 0, "The game is an RPG game like dungeon & dragons and the book where you are the hero.\n\nIt is just a free project so there is no release date and I don\'t know when the game may be in alpha/beta test.\nSo wait until it will be finish.\n\nCopyright kevinjojo007 but who will copy this ?:) ");
	getch();
	endwin();
}
