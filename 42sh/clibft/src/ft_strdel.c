/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 07:46:41 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/06/20 08:39:59 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* This function does not work if the as pointer points to 0 (null character) */


#include "../includes/libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
