#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_str_is_alpha(argv[1]));
	return (0);
}
