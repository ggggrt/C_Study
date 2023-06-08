#include <stdio.h>

int main()
{
    char str[] = "I love C language!";
    char *p = str;
    int count = 0;

    while (*p++ != '\0')
    {
        count++;
    }
    printf("count = %d\n", count);
    return 0;
}