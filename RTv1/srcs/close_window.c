/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviwel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/05 07:41:32 by daviwel           #+#    #+#             */
/*   Updated: 2016/07/05 07:42:38 by daviwel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

int	close_window(t_env *env)
{
	cleanup(env);
	exit(0);
}