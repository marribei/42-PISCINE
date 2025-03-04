/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:19:44 by marribei          #+#    #+#             */
/*   Updated: 2023/08/11 13:24:31 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_print(av[1]);
	}
	write(1, "\n", 1);
}
