/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:10:45 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/21 10:45:16 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(int argc, char *argv[])
{
	int	i;

	ft_strcpy(argv[1], argv[2]);
	i = 0;
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}*/
