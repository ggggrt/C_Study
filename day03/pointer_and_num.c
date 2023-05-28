#include <stdio.h>

int main()
{
    // int a;
    // int *p = &a;
    // printf("请输入一个整数：");
    // scanf("%d", &a);
    // printf("a = %d\n", a);

    // printf("请重新输入一个整数：");
    // scanf("%d", p);
    // printf("a = %d\n", a);
    // return 0;
    // char str[128];
    double str[128];

    printf("请输入一个字符串：");
    scanf("%s", str);
    printf("str = %s\n", str);
    printf("str = %p\n", str);
    printf ("str[0] = %p\n", &str[0]);
    /*查看数组字符间隔*/
    printf ("str[1] -> %p\n str[2] -> %p\n", &str[1], &str[2]);
    return 0;

}