/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 14:33:42 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/06/19 14:48:36 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	cnt; 

	cnt = ft_strlen(s) + 1;
	s = s + cnt - 1;
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
