/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:33:06 by marribei          #+#    #+#             */
/*   Updated: 2023/08/15 19:23:10 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	int_to_char(int i)
{
	char	aux;
	char	aux2;

	if (i < 10)
	{
		aux = i + 48;
		write(1, &aux, 1);
		write(1, "\n", 1);
	}
	else
	{
		aux = (i / 10) + 48;
		aux2 = (i % 10) + 48;
		write(1, &aux, 1);
		write(1, &aux2, 1);
		write(1, "\n", 1);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else if (i < 10)
		{
			int_to_char(i);
		}
		else
		{
			int_to_char(i);
		}
		i++;
	}
}
