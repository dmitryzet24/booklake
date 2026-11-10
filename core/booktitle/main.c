#include "ft_strlen.h"
#include "normalize_title.c"

int	main (void)
{
	char test1[] = "Dune";
    char test2[] = "   Dune";
    char test3[] = "Dune   ";
    char test4[] = "   The   Hobbit   ";
    char test5[] = "     ";
    char test6[] = "";
    char test7[] = "A  B  C";
    normalize_title(test1);
    normalize_title(test2);
    normalize_title(test3);
    normalize_title(test4);
    normalize_title(test5);
    normalize_title(test6);
    normalize_title(test7);

    return (0);
}
