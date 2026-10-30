#include "ft_strlen.h"

int	main (int argc, char **argv)
{
	(void)argc;
	if (argc != 2)
		return (1);
	else if ((argc == 2) && argv[1][0] == '\0')
		printf("Please, restart the program and write a book title\n");
	else
	{ 
		printf("Title: %s\n", argv[1]);
		printf("Length: %d\n", ft_strlen(argv[1]));
	}
	return (0);
}