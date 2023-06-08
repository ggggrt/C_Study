#include <stdio.h>>

int is_leap_year(int year)
{
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int year = 0;
    for (year=1000; year<=2000; year++)
    {
        if (1 ==is_leap_year(year)){
            printf("%d\n", year);
        }
    }
    return 0;
}