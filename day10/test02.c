#include <stdio.h>

// int main()

// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int i = 0;
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int *p = arr;
//     // for (i = 0; i < sz; i++)
//     // {
//     //     printf("%d ", *p);
//     //     p = p + 1;
//     // }
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", *p);
//         p++;
//     }
// }

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n", &arr[9] - &arr[0]);
    // 指针减去指针，得到的是两个指针之间相差的元素个数
    printf("%d\n", &arr[0] - &arr[9]);
}