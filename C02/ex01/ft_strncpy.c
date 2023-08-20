#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(int argc, char **argv)
{
	unsigned int n = atoi(argv[3]);
	*ft_strncpy(argv[1], argv[2], n);
	printf("%s", argv[1]);
	return (0);
}
