/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:16:29 by marribei          #+#    #+#             */
/*   Updated: 2023/08/10 18:29:30 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 9 && str[i] != 32 && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
	
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		first_word(av[1]);
	}
	write(1, "\n", 1);
}
