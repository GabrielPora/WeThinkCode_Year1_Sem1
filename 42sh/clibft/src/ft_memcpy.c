/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 18:27:19 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/06/20 07:15:57 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	char		*cpy;
	const char	*cpy2;

	cpy = dest;
	cpy2 = src;
	while (n-- > 0)
		*cpy++ = *cpy2++;
	return (dest);
}
