#include "ft_strlen.h"
#include <stdio.h>

int	main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	
	printf("%d\n", ft_strlen("a"));
	printf("%d\n", ft_strlen("asd!"));
	printf("%d\n", ft_strlen("as\0d!"));
	
	return (0);
}