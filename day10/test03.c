#include <stdio.h>

// int main()
// {
//     int arr[10] = {0};
//     printf("%p\n", arr+1);// 地址-首元素地址
//     printf("%p\n", &arr[0]);// 地址-首元素地址
//     // 1.&arr &数组名- 数组名不是首元素的地址，而是整个数组的地址
//     // 2. sizeof(arr) 数组所占空间大小,计算整个数组的大小
//     printf("%d\n", sizeof(arr));
//     printf("%p\n", &arr+1);
//     return 0;
// }

int main()
{
    int a = 10;
    int *pa = &a;
    int **ppa = &pa; // ppa为二级指针
    printf("%p\n", **ppa);
    printf("%d\n", **ppa);
    return 0;
}