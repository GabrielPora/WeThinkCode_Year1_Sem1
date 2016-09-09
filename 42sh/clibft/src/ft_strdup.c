/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 12:53:38 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/10 13:35:33 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	cnt;

	cnt = 0;
	cpy = (char *)ft_strnew(sizeof(char) * (ft_strlen(s1) + 1));
	while (s1[cnt])
	{
		cpy[cnt] = s1[cnt];
		cnt++;
	}
	if (cpy == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	return (cpy);	
}
