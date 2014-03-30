/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_obj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 08:21:35 by jchichep          #+#    #+#             */
/*   Updated: 2014/03/27 09:00:34 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"perso.h"

void			set_obj_to_null(t_obj *obj)
{
	obj->name = "aucun equipement";
	obj->force = 0;
	obj->dexterite = 0;
	obj->intelligence = 0;
	obj->charisme = 0;
	obj->sagesse = 0;
}
