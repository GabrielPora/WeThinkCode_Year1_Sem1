/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 16:19:56 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/06/30 14:39:19 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int		nb;
	int		check;
	size_t	cnt;

	nb = 0;
	cnt = 0;
	check = 0;
	if (str[cnt] == '-')
	{
		check = -1;
		cnt++;
	}
	if (str[cnt] == '+')
		cnt++;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 48 && str[cnt] <= 57)
		{
			nb = (nb * 10) + (str[cnt] - '0');
		}
		else
		{	
			if (check == -1)
				nb = nb * check;
			return (nb);
		}
		cnt++;
	}
	if (check == -1)
		nb = nb * check;
	return (nb);
}
