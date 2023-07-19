#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int *p = arr;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        *(p + i) = 1;
    }
    printf("%d\n", arr[9]);
    return 0;
}