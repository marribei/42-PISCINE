/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_again.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:38:17 by marribei          #+#    #+#             */
/*   Updated: 2023/08/17 20:23:15 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int len(long nb)
{
	int	size;

	size = 1;
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	long		nb;

	i = len(nbr);
	nb = nbr;
	str = (char *)malloc(sizeof(char) * (len(nbr) + 1));
	if (!str)
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
	while (nb > 0)
	{
		str[i] = (nb % 10) + 48;
		nb = nb / 10;
		i--;	
	}
	return (str);
}

int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
}
