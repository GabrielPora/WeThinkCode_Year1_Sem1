/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/03 09:22:36 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/05 12:33:35 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	k;

	k = start;
	temp = (char *)malloc((unsigned int)len);
	while ((k < len + start) && s[k] != '\0')
	{
		temp[k - start] = s[k];
		k++;
	}
	temp[k] = '\0';
	return (temp);
}
