/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:18:22 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/17 10:13:37 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num[10];
	int		index;

	index = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
		write(1, "0", 1);
	while (nb > 0)
	{
		num[index] = nb % 10 + '0';
		nb /= 10;
		index++;
	}
	while (index > 0)
	{
		index --;
		write(1, &num[index], 1);
	}
}

int	main(void)
{
	int	number;
	number = 42;
	ft_putnbr(number);
	return (0);
}
