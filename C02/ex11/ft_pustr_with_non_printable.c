/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:07:55 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/21 17:05:32 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] != 127)
			ft_print(str[i]);
		else
		{
			ft_print('\\');
			ft_print("0123456789abcdef"[str[i] / 16]);
			ft_print("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}

/*int	main(void)
{
	char string[] = "holis\nesto es asi";
	ft_putstr_non_printable(string);
	int	i = 0;
	return (0);
}*/
