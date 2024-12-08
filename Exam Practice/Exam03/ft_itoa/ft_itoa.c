/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:44:27 by marribei          #+#    #+#             */
/*   Updated: 2023/08/16 14:31:14 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_len(long nbr)
{
	int	lenght;

	lenght = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		lenght++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	long		nb;

	i = ft_len(nbr);
	nb = nbr;
	str = (char *)malloc(sizeof(char) * (ft_len(nbr) + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i--;
	str[i] = '\0';
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}	
	while (nb > 9)
	{
		str[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	str[i] = (nb % 10) + 48;
	return (str);
}

int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
}
