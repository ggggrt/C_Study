#include <stdio.h>

int main()
{
	int arr[] = { 0,8,2,5,4,6,7,9,1,3 };
	int len = sizeof(arr) / sizeof(arr[0]);
    // sizeof(arr)表示整个数组的大小，sizeof(arr[0])表示数组中每个元素的大小
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
    // &数组名，数组名表示整个数组，&数组名表示整个数组的地址
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	return 0;
}