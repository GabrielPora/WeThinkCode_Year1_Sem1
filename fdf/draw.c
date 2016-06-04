/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 05:15:52 by ggroener          #+#    #+#             */
/*   Updated: 2016/06/03 15:34:36 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_map(t_win *win)
{
	int	i;
	int	j;

	j = 0;
	while (j < win->map_h)
	{
		i = 0;
		while (i < win->map_w)
		{
			if (i < win->map_w - 1)
				draw_line(win, &(win->map[j][i]), &(win->map[j][i + 1]));
			if (j < win->map_h - 1)
				draw_line(win, &(win->map[j][i]), &(win->map[j + 1][i]));
			i++;
		}
		j++;
	}
}

void	draw_line(t_win *win, t_point *point1, t_point *point2)
{
	int		x;
	int		y;
	int		e2;
	t_draw	*draw;

	draw = draw_construct(point1, point2, (win->max_z));
	x = point1->d2x;
	y = point2->d2y;
	while (x == point2->d2x && y == point2->d2y) //(1)
	{
		if ((check_x(win, x) && check_y(win, y)))
			draw_point(win, create_x(win, x), create_y(win, y), point1->colour);
		/*if (x == point2->d2x && y == point2->d2y)
			break ;*/		
		if ((e2 = draw->delta_error) > -(draw->delta_x))
		{
			draw->delta_error -= draw->delta_y;
			x += draw->sign_x;
		}
		if (e2 < draw->delta_y)
		{
			draw->delta_error += draw->delta_x;
			y += draw->sign_y;
		}
	}
}

void	draw_point(t_win *win, int x, int y, int colour)
{
	if (win->draw_type == PUT)
		ft_memcpy(&win->data[(x * 4) + (y * win->size)], &(colour),
				(size_t)(sizeof(int)));
	if (win->draw_type == DRAW)
	{
		mlx_pixel_put(win->init, win->win , x, y, colour);
		usleep(5);
	}
}

int		choose_colour(int p1, int p2, int max)
{
	if (((p1 + p2) / 2) > (max * 0.8))
		return(WHITE);
	else if (((p1 + p2) / 2) == 0)
		return (GREEN);
	else if (((p1 + p2) / 2) < 0)
		return (BLUE);
	else
		return (BROWN);
}

t_draw	*draw_construct(t_point *point1, t_point *point2, int max)
{
	t_draw	*draw;

	draw = (t_draw *)malloc(sizeof(t_draw));
	draw->delta_x = abs(point2->d2x - point1->d2x);
	draw->sign_x = point1->d2x < point2->d2x ? 1 : -1;
	draw->delta_y = abs(point2->d2y - point1->d2y);
	draw->sign_y = point1->d2y < point2->d2y ? 1 : -1;
	draw->delta_error = (draw->delta_x > draw->delta_y ? draw->delta_x :
			-(draw->delta_y)) / 2;
	point1->colour = choose_colour(point1->d3z, point2->d3z, max);
	return(draw);
}
