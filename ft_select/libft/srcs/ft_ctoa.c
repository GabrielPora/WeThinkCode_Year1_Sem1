/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 17:43:21 by ggroener          #+#    #+#             */
/*   Updated: 2016/07/15 17:46:51 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_ctoa(int c)
{
	char	*str;

	if ((str = (char *)malloc(sizeof(char) * 2)) == NULL)
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
