#include <stdio.h>
#include <string.h>

/*strlen和sizeof区别*/

int main()
{
    char arr1[] = "abcdef";
    char arr2[] = {'a','b','c','d','e','f'};
    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2));        // arr2没有\0，strlen会一直往后找，直到找到\0为止
    printf("%c\n",arr2[0]);
    // strlen计算字符串长度，遇到\0结束 是库函数
    printf("%d\n",sizeof(arr1));
    printf("%d\n",sizeof(arr2));
    // sizeof计算数组长度，遇到\0不结束 是操作符
    return 0;
}