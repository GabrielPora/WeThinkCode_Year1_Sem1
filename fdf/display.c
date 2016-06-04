/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 16:45:15 by ggroener          #+#    #+#             */
/*   Updated: 2016/06/03 15:58:02 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	hide_legend(t_win * win)
{
	win->legend_display = (win->legend_display == ON) ? OFF : ON;
	erase(win);
}

void	put_info_to_windows(t_win *win)
{
	put_black_screen(win);
	put_meta(win);
}

void	put_meta(t_win *win)
{
	mlx_string_put(win->init, win->win, 10, 15, 0xFFFFFF, "Legend :");
	mlx_string_put(win->init, win->win, 10, 35, 0xFFFFFF, win->path);
	mlx_string_put(win->init, win->win, 10, 55, 0xFFFFFF, "Zoom : '+' / '-'");
	mlx_string_put(win->init, win->win, 10, 75, 0xFFFFFF,
			"Rotate : '*' / '/'");
	mlx_string_put(win->init, win->win, 10, 95, 0xFFFFFF,
			"change rotation : 'x' / 'c' / 'v'");
	mlx_string_put(win->init, win->win, 10, 115, 0xFFFFFF,
			"change output mode : 'd' / 'f'");
	mlx_string_put(win->init, win->win, 10, 135, 0xFFFFFF,
			"change projection : 'i' / 'p'");
	mlx_string_put(win->init, win->win, 10, 155, 0xFFFFFF,
			"move : direction arrow");
	mlx_string_put(win->init, win->win, 10, 175, 0xFFFFFF,
			"change Z : 'mouse 1' / 'mouse 3'");
	mlx_string_put(win->init, win->win, 10, 195, 0xFFFFFF,
			"original setting : 'o'");
	mlx_string_put(win->init, win->win, 10, 215, 0xFFFFFF,
			"hide legend : 'h'");
}

void	put_black_screen(t_win *win)
{
	int	i;
	int	j;

	j = 0;
	while (j < 250)//200
	{
		i = 5;//1680
		while (i < WIN_W/8)
		{
			mlx_pixel_put(win->init, win->win, i, j, 0x0000FF);
			i++;
		}
		j++;
	}
}
