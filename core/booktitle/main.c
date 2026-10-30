#include "ft_strlen.h"

int	main (int argc, char **argv)
{
	(void)argc;
	if (argc != 2)
		return (1);
	else
	{ 
		printf("Title: %s\n", argv[1]);
		printf("Length: %d\n", ft_strlen("asd!"));
	}
	return (0);
}