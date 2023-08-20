#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 64 || str[i] > 91)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_str_is_uppercase(argv[1]));
	return (0);
}
