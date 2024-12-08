/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:26:33 by marribei          #+#    #+#             */
/*   Updated: 2023/08/11 13:35:13 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_doubles(int i, char *str1, char c)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str1[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	inter(char *str1, char *str2)
{
	int	i;
	int	l;

	i = 0;
	while (str1[i] != '\0')
	{
		l = 0;
		while (str2[l] != '\0')
		{
			if (str1[i] == str2[l])
			{
				if (check_doubles(i, str1, str1[i]) == 1)
				{
					write(1, &str1[i], 1);
					break ;
				}
			}
			l++;
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
	write(1, "\n", 1);
}
