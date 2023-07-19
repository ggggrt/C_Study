# include <stdio.h>

// int main()
// {
//     int num = 0;
//     int count = 0;
//     scanf("%d", &num);
//     while(num)
//     {
//         if (num % 2 == 0)
//         {
//             count ++;
//         }
//         num = num / 2;

//     }
//     printf("%d\n", count);
//     return 0;
// }

int main()
{
    int num =0;
    int count = 0;
    scanf("%d", &num);
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if (1 == ((num >> i) & 1))
        {
            count ++;
        }
        // printf("%d\n", count);
    }
    // printf("%d\n", num);
    return 0;
}