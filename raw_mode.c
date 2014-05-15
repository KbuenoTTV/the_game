/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raw_mode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 09:11:00 by jchichep          #+#    #+#             */
/*   Updated: 2014/05/15 13:28:34 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<termios.h>
#include	<signal.h>

void		unset_raw_mode(void)
{
	struct termios t;

	tcgetattr(0, &t);
	t.c_lflag += ICANON;
	t.c_lflag += ECHO;
	t.c_cc[VMIN] = 1;
	t.c_cc[VTIME] = 0;
	tcsetattr(0, TCSANOW, &t);
}

void		set_raw_mode(void)
{
	struct termios t;

	tcgetattr(0, &t);
	t.c_lflag &= ~ICANON;
	t.c_lflag &= ~ECHO;
	t.c_cc[VMIN] = 1;
	t.c_cc[VTIME] = 0;
	tcsetattr(0, TCSANOW, &t);
}
