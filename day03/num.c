#include <stdio.h>
#include <math.h>

int main()
{
    //定义一个二维数组
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    char b[4][5];
    double c[2][3];
    printf("sizeof a = %d\n", sizeof(a));
    printf("%d\n", a[1][2]);
    return 0;
}