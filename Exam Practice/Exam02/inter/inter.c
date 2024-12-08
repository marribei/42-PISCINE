/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:24:55 by marribei          #+#    #+#             */
/*   Updated: 2023/08/11 11:11:53 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_doubles(int i, char c, char *str1)
{
	int	l;
	
	l = 0;
	while (l < i)
	{
		if (str1[l] == c)
		{
			return (0);
		}
		l++;
	}
	return (1);
}

void	inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				if (check_doubles(i, str1[i], str1)  == 1)
				{
					write (1, &str1[i], 1);
					break ;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	write (1, "\n", 1);
}
