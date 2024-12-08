/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:51:58 by marribei          #+#    #+#             */
/*   Updated: 2023/08/03 12:16:48 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

int	ft_strlen(char *str)
{
	int	size;

	size = 0; 
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	size;
	int	holder;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2 )
	{
		holder = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = str[i];
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "palindrome";
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	ft_strrev(str);
	while (str[i] != '\0')
	{
		if (i < size)
		{
			write(1, &str[i], 1);
		}		
		i++;
	}
}*/
