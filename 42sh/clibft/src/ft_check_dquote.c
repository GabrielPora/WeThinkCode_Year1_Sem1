/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dquote.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 12:44:09 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/10 13:23:38 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	*ft_check_dquote(char *str)
{
	size_t	*ptr_arr;
	size_t	cnt;
	size_t	cnt2;

	cnt = 0;
	cnt2 = 0;
	ptr_arr = (size_t *)malloc(sizeof(size_t) * ft_count_char(str, 34));
	while (str[cnt] && str[cnt] != '\0')
	{
		if (str[cnt] == 34 || str[cnt] == 39)
		{
			ptr_arr[cnt2] = cnt;
			cnt2++;
		}
		cnt++;
	}
	return (ptr_arr);
}
