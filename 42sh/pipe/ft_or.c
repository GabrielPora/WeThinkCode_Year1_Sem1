/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_or.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 14:16:00 by ggroener          #+#    #+#             */
/*   Updated: 2016/09/07 14:16:01 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_or(t_pipe **and, t_env *env)
{
	int		ret;

	ret = 0;
	if ((ret = ft_read_tree((*and)->rgt, env, 1)) < 0)
		ret = ft_read_tree((*and)->lft, env, 1);
	return (ret);
}
