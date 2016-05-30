/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 14:26:06 by ggroener          #+#    #+#             */
/*   Updated: 2016/05/30 14:36:48 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	para_projection(t_win *win)
{
	win->opt = PARA;
	erase(win);
}

void	iso_projection(t_win *win)
{
	win->opt = ISO;
	erase(win);
}

void	draw_method(t_win *win)
{
	win->draw_type = DRAW;
	erase(win);
}

void	put_method(t_win *win)
{
	win->draw_type = PUT;
	erase(win);
}

void	vanilla_mode(t_win *win)
{
	win->pad = 15;
	win->opt = ISO;
	win->pad_h = 5;
	win->move_lr = 1;
	win->move_ud = 1;
	win->draw_type = PUT;
	win->angle = 0;
	win->legend_display = ON;
	erase(win);
}
