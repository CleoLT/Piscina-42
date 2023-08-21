/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:19:29 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/21 16:06:43 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
			dest[i] = src[i];
			i++;
	}
	dest[size] = '\0';
	return (0);
}

/*int	main(int argc, char **argv)
{
	unsigned int n = atoi(argv[3]);
	if (argc < 3)
		printf("%s", "error");
	ft_strlcpy(argv[1], argv[2], n);
	printf("%s", argv[1]);
}*/
