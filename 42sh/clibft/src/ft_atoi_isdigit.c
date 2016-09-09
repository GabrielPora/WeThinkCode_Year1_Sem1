/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 21:28:49 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/03 10:21:36 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi_isdigit(const char *str)
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
			ft_putstr("Error\n");
			return ('a');
		}
		cnt++;
	}
	if (check == -1)
		nb = nb * check;
	if (nb < -32768 || nb > 32767)
	{
		ft_putstr("Error\n");
		return ('a');
	}	
	return (nb);
}
