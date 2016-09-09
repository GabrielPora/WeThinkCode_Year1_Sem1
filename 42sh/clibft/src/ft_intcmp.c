/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/03 11:14:09 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/03 11:19:34 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_intcmp(int *a)
{
	size_t cnt;
	size_t	cnt2;

	cnt = 0;
	while (a[cnt] && a[cnt + 1])
	{
		cnt2 = cnt;
		while (a[cnt2 + 1])
		{
			if (a[cnt] == a[cnt2 + 1])
				return (-1);
			cnt2++;
		}
		cnt++;
	}
	return (0);
}
