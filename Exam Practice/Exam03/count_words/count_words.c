/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:45:33 by marribei          #+#    #+#             */
/*   Updated: 2023/08/16 11:31:39 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == 32 || str[i] == '\t') && (str[i - 1] != 32 && str[i - 1] != '\t'))
			count++;
		i++;
	}
	if ((str[i - 1] != 32 && str[i - 1] != '\t'))
		count++;
	return (count);
}

int	main(void)
{
	char *str = "Vamos la testar, quero quantas palabras?   e agor? ?? &@@)!  3";

	printf("%d", count_words(str));
}
