#include <stdio.h>

/*二分查找函数*/
int binary_search(int arr[], int key, int sz)
{
    //算法实现
    //1.定义变量
    // int sz = sizeof(arr) / sizeof(arr[0]); 不能使用该方式求数组长度，该方式只能用于函数内部，这里的arr是一个指针，是数组首元素的地址
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2; //中间元素的下标
        if (arr[mid] < key)
        {
            left = mid + 1;
        }else if (arr[mid] > key)
        {
            right = mid - 1;
        }else{
            return mid;
        }
    }
    
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr, sz, k);
    if (ret == -1)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了，下标是%d\n", ret);
    }
}