/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 08:26:21 by jchichep          #+#    #+#             */
/*   Updated: 2014/03/30 12:44:31 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"perso.h"
#include		"function.h"

void			init_carac(t_carac *carac)
{
	carac->force = 10;
	carac->dexterite = 10;
	carac->intelligence = 10;
	carac->charisme = 10;
	carac->sagesse = 10;
}

void			init_argent(t_argent *argent)
{
	argent->pc = 0;
	argent->pa = 0;
	argent->po = 0;
	argent->pp = 0;
}

void			init_info(t_info *info)
{
	info->pv = 20;
	info->lvl = 0;
	info->xp = 0;
	info->race = HUMAIN;
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
