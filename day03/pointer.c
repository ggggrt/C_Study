#include <stdio.h>

int main()
{
    /*c语言指针学习*/
    int a = 10;
    int *p = &a;
    printf("a = %d\n", a);
    // %p表示打印地址类型数据
    printf("&a = %p\n", &a);
    // 通过地址修改值
    *p = 20;
    printf("a = %d\n",*(&a));

    return 0;

}