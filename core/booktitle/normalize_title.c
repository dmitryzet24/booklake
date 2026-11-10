#include <stdio.h>

void normalize_title(char *str)
{
    int     write = 0;
    int     read = 0;
   
    while (str[read] == ' ')
        read++;
    while (str[read] != '\0')
    {
        if (write > 0 && str[read] == ' ' && str[write - 1] == ' ')
        {
            read++;
        }
        else
        {
            str[write] = str[read];
            write++;
            read++;
        }
    }
    if (str[write - 1] == ' ')
        str[write - 1] = '\0';
    else
        str[write] = '\0';
    printf("%s\n", str);            
}
