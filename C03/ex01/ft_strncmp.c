/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:05:35 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/29 15:35:20 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] && s2[i]) != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*int	 main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("%d", strncmp(argv[1], argv[2], atoi(argv[3])));
	}
}*/
