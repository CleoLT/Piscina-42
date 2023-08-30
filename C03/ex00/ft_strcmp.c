/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:28:43 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/27 20:44:04 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
		printf("%d\n", strcmp(argv[1], argv[2]));
	}
}*/
