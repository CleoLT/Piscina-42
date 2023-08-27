/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:15:33 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/27 17:21:36 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
		}
		i++;
	}
	if (to_find[0] == '\0')
		return (str);
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s", ft_strstr(argv[1], argv[2]));
	return (0);
}*/
