#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_str_is_lowercase(argv[1]));
	return (0);
}
