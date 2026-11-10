#include "booklake.h"

int count_words(char const *s, char c)
{
    int cnt = 0;
    int flag = 0;

    while(*s != '\0')
    {
        flag = 0;
        while(*s == c)
            s++;
        while(*s != '\0' && *s != c)
        {
            flag = 1;
            s++;
        }
        if (flag == 1)
            cnt++;
    }
    return (cnt);
}

int main(void)
{
    char *str1 = "  kjsdfh skdjfhsdjkh ksdjfshkdf  ksjdfhsd";
    char splitter = ' ';
    printf("Num of Words = %d\n", count_words(str1, splitter));
    return (0);
}

