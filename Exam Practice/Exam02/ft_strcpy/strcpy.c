/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:14:39 by marribei          #+#    #+#             */
/*   Updated: 2023/08/10 19:17:39 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpty(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '0')
	{
		s1[i] = s2[i];
	}
	s1[i] == '\0';
	return (s1);
}
