/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmpadding.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 12:57:01 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/10 13:24:07 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_rmpadding(char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(str));
	while (str[i] != '\0' && str[i])
	{
		if (str[i] == 9 && (str[i + 1] != ' ' || str[i + 1] != 9))
		{
			dest[j] = ' ';
			i++;
			j++;
		}
		if ((str[i] == ' ' || str[i] == 9) && (str[i + 1] = ' ' 
					|| str[i + 1] == 9))
		{	
			while ((str[i] == ' ' || str[i] == 9) && (str[i + 1] == ' ' 
						|| str[i + 1] == 9))
			{
				i++;
			}
			if (j != 0)
			{
				dest[j] = ' ';
				j++;
			}
			i++;
		}
		if (str[i] != '\0')
		{
			dest[j] = str[i];
			j++;
		}
		i++;
	}
	dest[j] = str[i];
	dest[j + 1] = '\0';
	return (dest);
}
