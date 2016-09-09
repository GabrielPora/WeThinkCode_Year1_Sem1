/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 07:57:33 by khansman          #+#    #+#             */
/*   Updated: 2016/07/04 14:04:50 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_strsplit(char const *s, char c);

int	do_command(char com[], char **ac)
{
	char *str;
	char **arr;

	arr = ft_strsplit(com, ' ');
	str = ft_strjoin("/bin/", arr[0]);
	execve(str, arr, NULL);
	free(str);
	return (1);
}

int	main(int av, char **ac)
{
	char	com[101];
	char	buff;
	int		k;
	pid_t	forked = 0;

	if (forked == 0)
		write(1, "$>", 2);
	while (1)
	{
		buff = 'k';
		k = -1;
		while (buff != '\0' && buff != '\n' && k < 100)
		{
			if (k > -1)
				com[k] = buff;
			read(0, &buff, 1);
			k++;
		}	
		com[k] = '\0';
		if (memcmp(com, "exit", k) == 0)
			break;
		else
		{
			forked = fork();
			if (forked == 0)
			{
				do_command(com, ac);
				break;
				wait(0);
			}
		}
		wait(0);
		write(1, "$>", 2);
	}
}
