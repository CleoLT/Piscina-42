/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:38:57 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/17 12:04:49 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int num1 = 5;
	int num2 = 2;
	int	num3 = 22;
	int num4 = 5556;

	ft_div_mod(num1, num2, &num3, &num4);
	printf("%d %d", num3, num4);
}*/
