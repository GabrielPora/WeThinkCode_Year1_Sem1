/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:55:29 by khansman          #+#    #+#             */
/*   Updated: 2016/07/05 12:36:02 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_malloc(char const *s1, char const *s2)
{
	int		k;
	int		l;

	k = 0;
	l = 0;
	while (s1 && s1[k] != '\0')
		k++;
	while (s2 && s2[l] != '\0')
		l++;
	return ((char *)malloc(k + l + 1));
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		k;
	int		l;
	char	*temp;

	temp = ft_malloc(s1, s2);
	if (temp == NULL)
		return (NULL);
	k = 0;
	while (s1 && s1[k] != '\0')
	{
		temp[k] = s1[k];
		k++;
	}
	l = 0;
	while (s2 && s2[l] != 0)
	{
		temp[k + l] = s2[l];
		l++;
	}
	if (k > 0)
		temp[k + l] = '\0';
	else
		temp[l] = '\0';
	return (temp);
}
