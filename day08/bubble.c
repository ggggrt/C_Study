#include <stdio.h>


void bubble_sort(int arr[], int sz)
{
    /*冒泡排序的实现*/
    // 1.确定趟数
    int len = sz;
    for (int i = 0; i < len - 1; i++)
    {
        // 每一趟冒泡排序
        int j = 0;
        for (j = 0; i < len -1 - i ; j ++)
        {
            if (arr[j] > arr[j + 1])
            {
                // 交换
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int arr[] = {0,8,2,5,4,6,7,9,1,3};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}