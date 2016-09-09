/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 07:13:29 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/06/20 07:36:31 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*cpy;
	const char	*cpy2;

	cpy = dest;
	cpy2 = src;
	while (n-- > 0)
	{
		if(*cpy2 != c)
			*cpy++ = *cpy2++;
		else
		{
			cpy++;
			n = -1;
		}
	}
	if (n == (size_t)-1)
		return (dest = cpy);
	else
		return (NULL);
}
