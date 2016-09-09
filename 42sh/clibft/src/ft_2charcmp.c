/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2charcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 13:52:26 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/08 10:53:05 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_2charcmp(char *str, char a, char b)
{
	size_t	cnt;
	char	*ptr;

	cnt = 0;
	ptr = (char *)str;
	while (ptr && *ptr != '\0' && (ptr + 1) && \
			*(ptr + 1) != '\0')
	{
		if (*ptr == a && *(ptr + 1) == b)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
