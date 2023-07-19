#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;
    int c = a & b; // 与操作符， 两个操作数都为1，结果为1，否则为0
    printf("%d\n", c);
    int d = a | b; // 或操作符， 两个操作数都为0，结果为0，否则为1
    printf("%d\n", d);
    int e = a ^ b; // 异或操作符， 两个操作数相同为0，不同为1
    printf("%d\n", e);
}