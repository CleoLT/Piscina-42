/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:12:13 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/12 17:21:27 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	result[5];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			result[0] = a / 10 + '0';
			result[1] = a % 10 + '0';
			result[2] = ' ';
			result[3] = b / 10 + '0';
			result[4] = b % 10 + '0';
			write(1, &result, 5);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
