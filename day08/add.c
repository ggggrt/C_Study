#include <stdio.h>

int main(){
    //二维数组
    int arr[3][4] = {0};
    int arr2[][4] = {{1,2,3,4}, {4,6,7,8}};
    int arr3[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%d\n", arr[1][2]);
    printf("%d\n", arr2[1][2]);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}