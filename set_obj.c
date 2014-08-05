/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_obj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 08:21:35 by jchichep          #+#    #+#             */
/*   Updated: 2014/08/05 02:35:06 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"perso.h"

void			set_obj_to_null(t_obj *obj)
{
	obj->name = "aucun equipement";
	obj->att = 0;
	obj->def = 0;
	obj->force = 0;
	obj->dexterite = 0;
	obj->intelligence = 0;
	obj->charisme = 0;
	obj->sagesse = 0;
}
