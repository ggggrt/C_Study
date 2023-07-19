# include <stdio.h>

// int main()
// {
//     int *p;
//     *p = 20; // 野指针 未初始化的指针 非法访问
//     return 0;
// }

// 避免野指针的方法
// 1. 指针初始化
// 2. 指针指向合法的内存空间
// 3. 指针指向的内存空间释放后，指针置空
// 4. 使用·指针前，检查指针是否为空

int main()
{
    int a =10;
    int *pa = &a;
    printf("%d\n", *pa);
    pa = NULL;
    if (pa != NULL)
    {
        printf("%d\n", *pa);
    }
    return 0;
}