/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/29 17:02:01 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/07/07 16:23:01 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		cnt;
	int		cnt2;
	char	*temp;
	
	cnt = 0;
	cnt2 = 0;
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) - 1));	
	while (s1[cnt] != '\0')
	{
		temp[cnt] = s1[cnt];
		cnt++;
	}
	s1 = temp;
	while (s2[cnt2])
	{
		s1[cnt] = s2[cnt2];
		cnt++;
		cnt2++;
	}
	s1[cnt] = '\0';
	return (s1);
}
