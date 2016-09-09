/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 13:07:10 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/07 16:12:33 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	cnt;

	cnt = 0;
	while (src[cnt] != '\0' && src[cnt] && dest[cnt] && dest[cnt] != '\0')
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	return (dest);
}
