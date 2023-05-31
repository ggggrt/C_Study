#include <stdio.h>

void print(int num)
{
    if (num > 9)
    {
        print(num/10);
    }
    printf("%d ", num%10);
}

int main()
{
    unsigned int num = 12345;
    scanf("%d", &num);
    print(num);
    return 0;
} 