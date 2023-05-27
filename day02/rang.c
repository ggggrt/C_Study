#include <stdio.h>

int main()
{
    int a[12];
    int i ;
    /*生成一组随机数*/
    for (i = 0; i < 12; i++)
    {
        a[i] = rand() % 100;
    }
    /*打印数组a*/
    for (i = 0; i < 12; i++)
    {
        printf("%d ", a[i]);
    }
}