/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:26:57 by marribei          #+#    #+#             */
/*   Updated: 2023/08/11 11:54:54 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i - 1] == 32 || str[i - 1] == '\t') 
		i--;
	while (i > 0)
	{
		if (str[i - 1] == 32 || str[i - 1] == '\t') 
			break;
		i--;
	}
	while (str[i] != '\0' && (str[i] != 32 && str[i] != '\t'))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	write(1, "\n", 1);
}
