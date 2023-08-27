/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:23:25 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/27 18:40:02 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = ft_len(dest);
	i = 0;
	while (src[i] != '\0' && (j + i) < size)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (size);
}

/*int     main(void)
{
        char des[30] = "Hola";
        char src[] = ", que onda?";
        ft_strlcat(des, src, 9);
        printf("%s\n", des);
        return (0);
}*/
