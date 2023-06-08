#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world";
    char str2[30];
    printf("sizeof str len = %d\n", sizeof(str));
    printf("strlen str len = %u\n", strlen(str));
    strncpy(str2, str, sizeof(str));
    str2[sizeof(str)+1] = "\0";
    printf("str2 = %s\n", str2);
    int c = strcmp(str, str2);
    printf("strcmp = %d\n", c);
    return 0;
}