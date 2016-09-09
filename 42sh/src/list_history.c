/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_history.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlangman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 11:19:23 by jlangman          #+#    #+#             */
/*   Updated: 2016/09/06 09:29:41 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	list_history(t_env *env, char **sa)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 1;
	while (I_HIS[i])
		i++;
	i--;
	if (i > 14)
	{
		j = i - 14;
		i = 14;
	}
	while (i >= 0)
	{
		ft_putnbr(j);
		ft_putstr("	");
		ft_putstr(I_HIS[i]);
		ft_putstr("\n");
		i--;
		j++;
	}
}
