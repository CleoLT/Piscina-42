#include <stdio.h>

int	ft_is_alpha_num(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	       return (1);
	return (0);	
}

char	ft_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

char	ft_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	       return (c += 32);
	return (c);	
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str[0] = ft_uppercase(str[0]);
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alpha_num(str[i]) && !ft_is_alpha_num(str[i -1]))
			str[i] = ft_uppercase(str[i]);
		else
			str[i] = ft_lowercase(str[i]);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	ft_strcapitalize(argv[1]);
	printf("%s", argv[1]);
}
