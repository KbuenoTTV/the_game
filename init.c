/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 08:26:21 by jchichep          #+#    #+#             */
/*   Updated: 2014/08/05 02:08:42 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"perso.h"
#include		"function.h"

void			init_argent(t_argent *argent)
{
	argent->pc = 0;
	argent->pa = 0;
	argent->pp = 0;
}

void			init_info(t_info *info)
{
	info->pv = 20;
	info->lvl = 0;
	info->xp = 0;
	init_race(&(info->race));
}

void			init_main(t_main *main)
{
	set_obj_to_null(&(main->gauche));
	set_obj_to_null(&(main->droite));
	set_obj_to_null(&(main->deux));
}

void			init_equip(t_equip *equip)
{
	init_main(&(equip->main));
	set_obj_to_null(&(equip->tete));
	set_obj_to_null(&(equip->torse));
	set_obj_to_null(&(equip->bas));
	set_obj_to_null(&(equip->pied));
}
