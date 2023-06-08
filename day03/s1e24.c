/*指针数组与数组指针*/
#include <stdio.h>

int main()
{
    int a =1;
    int b =2;
    int c =3;
    int d =4;
    int e =5;
    /*指针数组*/
    // 结论：指针数组是一个数组，数组中的每个元素都是一个指针变量
    int *p1[5] = {&a, &b, &c, &d, &e};
    for (int i = 0; i < 5; i++)
    {
        printf("p1[%d] = %p\n", i, *p1[i]);
    }
    /*数组指针*/
    // 结论：数组指针是一个指针，指向一个数组 
    int (*p2)[5];
    return 0;

}