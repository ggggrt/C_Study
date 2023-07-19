#include <stdio.h>

// int main()
// {
//     //野指针：指针指向非法的内存空间
//     // int *p = 0x1100;
//     // 指针越界访问会导致野指针
//     // 局部变量不初始化，默认是随机值
//     // 局部变量的指针变量，就被初始化随机值
//     int arr[10] = {0};
//     int *p = arr;
//     int i = 0;
//     for (i = 0; i < 11; i++)
//     {
//         p++;
//     }
//     return 0;
// }

int * test()
{
    int a = 10;
    return &a;
    // return 时内存空间被释放，产生野指针
}

int main()
{
    // 指针指向的内部空间释放，也会产生野指针
    int *p = test();
    *p = 20;
    return 0;
}