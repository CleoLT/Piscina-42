/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:15:33 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/28 12:28:53 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j] && str[i] != '\0')
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
			if (str[i] == '\0')
				return (0);
		}
		j = 0;
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_strstr(argv[1], argv[2]));
		printf("%s\n", strstr(argv[1], argv[2]));
	}
	return (0);
}*/
