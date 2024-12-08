/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:11:19 by marribei          #+#    #+#             */
/*   Updated: 2023/08/16 12:30:42 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10 + 48;
		write (1, &nb, 1);
	}
	else
	{
		nb = nb + 48;
		write (1, &nb, 1);
	}
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		ft_putnbr(ac - 1);
		write (1, "\n", 1);
	}
	return (0);
}
