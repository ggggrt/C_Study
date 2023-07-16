#include <stdio.h>

int Fac1(int n)
{
    int i = 0;
    int ret = 1;
    for(i=1;i<=n;i++)
    {
        ret *= i;
    }
    return ret;
}

int Fac2(int n){
    if(n>=1)
    {
        return n*Fac2(n-1);
    }else{
        return 1;
    }
}


int main()
{
    /*求n的阶乘*/
    int n = 15;
    int ret =0;
    int ret2 = 0;
    ret = Fac1(n);
    ret2 = Fac2(n);
    printf("%d\n",ret);
    printf("%d\n",ret2);
    return 0;
}