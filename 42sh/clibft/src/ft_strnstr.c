/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 15:36:22 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/06/19 15:46:08 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*cpy;
	char	*cpy2;

	cpy = (char *)big;
	cpy2 = (char *)little;
	if (little == NULL)
		return ((char *)big);
	while (cpy && (len-- > 0))
	{
		if (*cpy2 == *cpy)
			cpy2++;
		else
			cpy2 = (char *)little;
		if (*cpy2 == '\0')
			return (cpy - ft_strlen(little) + 1);
		cpy++;
	}
	return (NULL);
}
