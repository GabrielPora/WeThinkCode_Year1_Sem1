/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_literal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:14:46 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/10 12:47:04 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_replace_literal(char *str)
{
	char	lit;
	char	check;
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(str));
	while (str[i] != '\0' && str[i])
	{
		if ((lit = ft_check_literal(str[i], str[i + 1], str[i + 2])) != 32)
		{
			dest[j] = lit;
			check = 'y';
			i = i + 3;
			j++;
		}
		if (((lit = ft_check_literal2(str[i], str[i + 1])) != 32) && check != 'y')
		{
			dest[j] = lit;
			i = i + 2;
			j++;
		}
		dest[j] = str[i];
		check = 'n';
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
