/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perso.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 07:16:02 by jchichep          #+#    #+#             */
/*   Updated: 2014/05/16 09:17:14 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSO_H
# define PERSO_H

typedef enum	e_race
{
	ORC = 1,
	DEMI_ORC = 2,
	HUMAIN = 3,
	DEMI_ELFE = 4,
	ELFE = 5
}				t_race;

typedef struct	s_carac
{
	int			force;
	int			dexterite;
	int			intelligence;
	int			charisme;
	int			sagesse;
}				t_carac;

typedef struct	s_argent
{
	int			pc;
	int			pa;
	int			po;
	int			pp;
}				t_argent;

typedef struct	s_obj
{
	char		*name;
	int			force;
	int			dexterite;
	int			intelligence;
	int			charisme;
	int			sagesse;
}				t_obj;

typedef struct	s_main
{
	t_obj		gauche;
	t_obj		droite;
	t_obj		deux;
}				t_main;

typedef struct	s_equip
{
	t_main		main;
	t_obj		tete;
	t_obj		torse;
	t_obj		bas;
	t_obj		pied;
}				t_equip;

typedef struct	s_info
{
	int			pv;
	int			lvl;
	int			xp;
	t_race		race;
}				t_info;

typedef struct	s_perso
{
	t_carac		carac;
	t_argent	argent;
	t_equip		equip;
	t_info		info;
}				t_perso;

#endif
