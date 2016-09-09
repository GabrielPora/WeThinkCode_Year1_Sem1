/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 12:51:22 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/08 13:56:22 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_count_char(const char *str, char c)
{
	size_t	cnt;
	size_t	cnt2;

	cnt = 0;
	cnt2 = 0;
	while (str[cnt] && str[cnt] != '\0')
	{
		if (str[cnt] == c)
			cnt2++;
		cnt++;
	}
	return (cnt2);
}
