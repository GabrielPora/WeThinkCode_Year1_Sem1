/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3charcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 15:44:34 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/08 13:49:16 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_3charcmp(char *str, char a, char b, char c)
{
	size_t	cnt;
	char	*ptr;

	cnt = 0;
	ptr = (char *)str;
	while (ptr && *ptr != '\0' && (ptr + 1) && \
			*(ptr + 1) != '\0' && (ptr + 2) && *(ptr + 2) != '\0')
	{
		if (*ptr == a && *(ptr + 1) == b && *(ptr + 2) == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
