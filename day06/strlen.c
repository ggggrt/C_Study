#include <stdio.h>
#include <string.h>

int my_strlen(char* str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int the_strlen(char* str)
{

    if (*str != '\0')
    {
        
        return 1+the_strlen(str+1);
    }else
    {
        return 0;
    }
    
}

int main()
{
    char arr[] = "bit";
    int len = my_strlen(arr);
    int len2 = the_strlen(arr);
    printf("%d\n", len2);
    printf("%d\n", len);
    return 0;
}