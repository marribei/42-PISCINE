/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:56:15 by marribei          #+#    #+#             */
/*   Updated: 2023/08/17 15:52:23 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	i;
	int	size;

	size = end - start;
	if (size < 0)
		size = -size;
	array = (int *)malloc(sizeof(int) * size + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	if (end > start)
	{
		while (start < end + 1)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while (start + 1 > end)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return (array);
}

int	main(void)
{
	int	start;
	int	end;
	int 	i;
	int	*array;

	start = 0;
	end = -7;
	array = ft_range(start, end); 
	i = 0;
	if (end > start)
	{
		while (i < (end - start + 1))
		{
			printf("%d ", array[i]);
			i++;
		}
	}
	else if (start > end)
	{
		while (i < ((start + 1) - end))
		{
			printf("%d ", array[i]);
			i++;
		}
	}
}
