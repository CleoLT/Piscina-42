/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:05:35 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/27 17:50:28 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && s2[i]) != '\0' && i < n)
	{
		if ((s2[i] - s1[i]) != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	 main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	}
}*/
