/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_alphabet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:18:02 by marribei          #+#    #+#             */
/*   Updated: 2024/12/08 14:11:17 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	all_writes(int a)
{
	int	space;

	space = 32;
	if (a < 122)
	{
		if (a != 107 && a != 119 &&  a != 121)
		{
			write(1, &a, 1);
			write(1, &space, 1);
		}
	}
	else
		write(1, &a, 1);
}

void	pt_alphabet(void)
{
	int	a;

	a = 97;
	while (a <= 122)
	{
		all_writes(a);
		a++;
	}
}

int	main(void)
{
	pt_alphabet();
	return (0);
}
