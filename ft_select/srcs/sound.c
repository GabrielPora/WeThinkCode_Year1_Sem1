/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sound.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:19:13 by ggroener          #+#    #+#             */
/*   Updated: 2016/07/16 16:19:15 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int		ft_sound(int key)
{
	if (key == GKEY_ESP)
		ft_cmdput("bl");
	return (1);
}
