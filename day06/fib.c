#include <stdio.h>

int count = 0;

//费波纳西数列
// int fib(int n)
// {
//     if (n==3)
//     {
//         count++;
//         printf("count = %d\n",count);
//     }
//     if(n<=2)
//     {
//         return 1;
//     }else{
//         return fib(n-1)+fib(n-2);
//     }
// }

int fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 0;
    while(n>2)
    {
        c = a+b;
        a = b;
        b = c;
        n--;
    }
    return b;
}



int main()
{
    int n = 0;
    int f = 0;
    scanf("%d",&n);
    f = fib(n);
    printf("%d\n",f);

}