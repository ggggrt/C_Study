# include <stdio.h>

int main()
{
    int *p;
    *p = 20; // 野指针 未初始化的指针 非法访问
    return 0;
}