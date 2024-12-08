/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:33:49 by marribei          #+#    #+#             */
/*   Updated: 2023/08/17 13:49:51 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == 32 || str[i + 1] == '\t'))
		{
			str[i] -= 32;
		}
		if (str[i + 1] == '\0' && (str[i] >= 'a' && 'z' >= str[i]))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	args;

	args = 1;
	while (args < ac)
	{
		rstr_capitalizer(av[args]);
		write(1, "\n", 1);
		args++;
	}
	if (ac == 1)	
		write(1, "\n", 1);
}
