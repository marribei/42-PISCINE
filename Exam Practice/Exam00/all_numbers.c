/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:00:00 by marribei          #+#    #+#             */
/*   Updated: 2024/12/08 14:11:20 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	all_numbers(void)
{
	int	a;
	int	b;
	int	space;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		space = 32;
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &space, 1);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	all_numbers();
	return (0);
}
