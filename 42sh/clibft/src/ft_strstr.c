/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:43:21 by khansman          #+#    #+#             */
/*   Updated: 2016/07/08 15:25:06 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *big, char *little)
{
	int		k;
	int		l;
	char	*pos;

	k = 0;
	if (sizeof(little) == 0 || little[0] == '\0')
		return (big);
	while (big[k] != '\0')
	{
		l = 0;
		while (little[l] == big[k + l])
			l++;
		if (little[l] == '\0')
		{
			pos = &big[k];
			return (pos);
		}
		k++;
	}
	return (NULL);
}
