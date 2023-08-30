/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:23:25 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/29 15:35:37 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

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
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_len(dest);
	slen = ft_len(src);
	i = 0;
	if (dlen >= size)
		return (slen + size);
	while (src[i] != '\0' && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (slen + dlen);
}

/*int     main(void)
{
        char des[30] = "Hola";
        char src[] = ", que onda?soy mas larga mas larga";
        unsigned int i = ft_strlcat(des, src, 4 );
        printf("%s\n", des);
		printf("%d\n", i);
		char dest[30] = "Hola";
        char srct[] = ", que onda?soy mas larga mas larga";
		unsigned int j = strlcat(dest, srct, 4);
        printf("%s\n", dest);
		printf("%d\n", j);
        return (0);
}*/
