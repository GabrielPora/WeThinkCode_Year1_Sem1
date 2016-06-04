/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 17:12:36 by ggroener          #+#    #+#             */
/*   Updated: 2016/06/03 14:30:05 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_import_map(t_win *win)
{
	win->init = mlx_init();
	win->win = mlx_new_window(win->init, WIN_W, WIN_H, "FdF");
	win->pad = 15;
	win->opt = ISO;
	win->pad_h = 5;
	win->move_lr = 1;
	win->move_ud = 1;
	win->draw_type = PUT;
	win->angle = 0;
	win->rot = BET_Z;
	win->legend_display = ON;
	win->img = mlx_new_image(win->init, WIN_W, WIN_H);
	win->data = mlx_get_data_addr(win->img, &(win->colour), &(win->size),
			&(win->endian));
	win->map = create_map(win);
	mlx_key_hook(win->win, key_hook, win);
	mlx_mouse_hook(win->win, mouse_hook, win);
	mlx_expose_hook(win->win, expose_hook, win);
	mlx_loop(win->init);
}
