#include <stdio.h>

/*布尔类型*/
int is_prime(int n)
{
    int i, bool = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0) // 除了1和它本身之外，还能被其他数整除
        {
            bool = 0;
            break;
        }
    }
    return bool;
}

int main()
{
    int i;
    for (i = 2; i <= 100; i++)
    {
        if (is_prime(i) == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}