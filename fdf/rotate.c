/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 14:37:11 by ggroener          #+#    #+#             */
/*   Updated: 2016/05/30 14:42:49 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	rotate_left(t_win *win)
{
	win->angle += 0.5;
	erase(win);
}

void	rotate_right(t_win *win)
{
	win->angle -= 0.5;
	erase(win);
}

void	pivote_X(t_win *win)
{
	win->rot = BET_X;
	erase(win);
}

void	pivote_y(t_win *win)
{
	win->rot = BET_Y;
	erase(win);
}

void	pivote_z(t_win *win)
{
	win->rot = BET_Z;
	erase(win);
}
