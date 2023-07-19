#include <stdio.h>

int main()
{
    short s = 0;
    int i = 20 ;
    printf("%d\n", sizeof(s = i + 5));
    printf("%d\n", s);
    // 取反操作
    int a = 11;
    a = a | (1 << 2);
    printf("%d\n", a);
    a = a & ~(1 << 2);
    printf("%d\n", a);
    // 0000 0000 0000 0000 0000 0000 0000 1011
    // 1 << 2
    // 0000 0000 0000 0000 0000 0000 0000 0100
    // 0000 0000 0000 0000 0000 0000 0000 0111
    printf("%d\n", ~a);
    return 0;
}