#include "ft_strlen.h"

int ft_strlen(char *str)
{
    int a = 0;

    while (*str != '\0')
    {
        a++;
        str++;
    }
    return (a);
}