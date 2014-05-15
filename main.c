/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 06:51:42 by jchichep          #+#    #+#             */
/*   Updated: 2014/05/15 13:29:06 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"perso.h"
#include	"function.h"

int				main(void)
{
	t_perso		perso;

	set_raw_mode();
	init_carac(&(perso.carac));
	init_argent(&(perso.argent));
	init_equip(&perso.equip);
	init_info(&(perso.info));
	show_carac(&(perso.carac));
	unset_raw_mode();
	return (0);
}
