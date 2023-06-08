#include <stdio.h>

int main(){
    int temp[5] = {1, 2, 3, 4, 5};
    int *p = temp;
    int i;
    // for (i =0; i<5; i++)
    // {
    //     printf("%d\n", *(p + i));
    // }
    // return 0;
    // p指向的是数组中的元素，而不是数组本身
    int (*p2)[5] = &temp;
    for (i =0; i<5; i++)
    {
        printf("%d\n", *(*p2 + i));
    }
}