/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 15:43:58 by ggroener          #+#    #+#             */
/*   Updated: 2016/05/31 10:46:03 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include "mlx.h"
# include "fdf.h"

int		main(int argc, char **argv)
{
	t_win	win;

	win.path = argv[1];
	if (argc > 1 && argc < 3)
		ft_import_map(&win);
	else
		ft_putstr("Insert map here.");
	return (0);
}
