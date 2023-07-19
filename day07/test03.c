#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;
    // 不创建临时变量·交换两个变量的值
    // 加减法
    a = a + b; // a = 8
    b = a - b; // b = 3
    a = a - b; // a = 5
    return 0;
    // 缺陷：可能会溢出
    //方法2：异或
    a = a ^ b; // a = 6
    b = a ^ b; // b = 3
    a = a ^ b; // a = 5
}