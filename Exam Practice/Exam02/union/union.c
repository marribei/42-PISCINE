/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:19:49 by marribei          #+#    #+#             */
/*   Updated: 2023/08/11 13:00:05 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_doubles1(int i, char *str1, char c)
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

int	check_doubles2(int i, char *str2, char c)
{
	int	j;
	
	j = 0;
	while (j < i)
	{
		if (str2[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (check_doubles1(i, str1, str1[i]) == 1)
		{
			write (1, &str1[i], 1);
		}
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		if (check_doubles2(i, str1, str1[i]) == 1)
		{
			if (check_doubles1(i, str1, str1[i]) == 1)
			{
				write (1, &str1[i], 1);
			}
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
}
