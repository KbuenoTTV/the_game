/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 06:51:42 by jchichep          #+#    #+#             */
/*   Updated: 2014/03/30 12:47:21 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"perso.h"
#include	"color.h"
#include	"function.h"

int				main(void)
{
	t_perso		perso;

	init_carac(&(perso.carac));
	init_argent(&(perso.argent));
	init_equip(&(perso.equip));
	init_info(&(perso.info));
	ft_putstr_color("\t\t\tWelcome to Bueno's RPG\n", RED);
	ft_putstr("The game is in construction so be patient ;)\n");
	return (0);
}
