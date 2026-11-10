#ifndef BOOKLAKE_H
#define BOOKLAKE_H

#include <stdio.h>
int     count_words(char const *s, char c);
//t_book  *create_book(char **fields);
//int     ft_atoi(char *str);
//void    book_add_back(t_book **head, t_book *new_book);
//int     book_count(t_book *head);
//void    free_catalog(t_book *head);
//int     import_book(t_book **head, char *line);

typedef struct s_book
{
    char            *title;
    char            *author;
    int             year;
    struct s_book   *next;
}   t_book;


#endif
