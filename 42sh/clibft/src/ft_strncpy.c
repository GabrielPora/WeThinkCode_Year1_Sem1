/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 13:22:18 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/10 13:35:05 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char	*cpy;

	cpy = dest;
	while (((*cpy++ = *src++) != 0) && (--len > 0))
		;
	if (ft_strlen(src) < ft_strlen(dest))
		while (--len > 0)
			*cpy++ = '\0';
	return (dest);
}
