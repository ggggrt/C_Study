#include <stdio.h>
int main()
{
    int a = 5 / 2; //商2余1
    printf("%d\n", a);
    float b = 5.0 / 2; //2.5
    printf("%f\n", b);
    // 取模只能用于整数

    int c = 16;
    // >> -- 右移操作符， 右移二进制位

    int d = c >> 2; // 16 / 2 / 2 = 4
    printf("%d\n", d);
    // << -- 左移操作符， 左移二进制位
    int e = c << 2; // 16 * 2 * 2 = 64;
    // 左移一位相当于乘以2， 左边丢弃右边补0
    printf("%d\n", e);

    return 0;

}