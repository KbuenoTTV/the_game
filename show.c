/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 19:44:24 by jchichep          #+#    #+#             */
/*   Updated: 2014/05/15 13:34:13 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"perso.h"
#include		"function.h"

void			show_carac(t_carac *carac)
{
	ft_putstr("STATS:\nForce -> ");
	ft_putnbr(carac->force);
	ft_putstr("\nDexterite -> ");
	ft_putnbr(carac->dexterite);
	ft_putstr("\nIntelligence -> ");
	ft_putnbr(carac->intelligence);
	ft_putstr("\nCharisme -> ");
	ft_putnbr(carac->charisme);
	ft_putstr("\nSagesse -> ");
	ft_putnbr(carac->sagesse);
	ft_putstr("\n");
}
