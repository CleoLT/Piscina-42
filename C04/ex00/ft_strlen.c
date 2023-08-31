/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:47:40 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/28 16:00:31 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_strlen(argv[1]));
	}
	printf("%lu\n", strlen(argv[1]));
	return (0);	
}*/
