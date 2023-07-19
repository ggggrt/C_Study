# include <stdio.h>

// 指针与指针变量
int main()
{
    // 在计算机科学中，指针（pointer）是编程语言中的一个对象，利用地址，它的值直接指向（points to）存在电脑存储器中另一个地方的值。
    // 指针类型的意义：指针类型决定了指针进行解引用操作时，所能访问到的内存空间的大小。
    // int *p 能够访问4个字节
    // char *p 能够访问1个字节
    // double *p 能够访问8个字节
    int a = 0x11223344;
    int *pa = &a;
    char* pc = &a;
    printf("pa = %p, pc = %p\n", pa, pc);
    printf("pa = %p, pc = %p\n", pa + 1, pc + 1);
    // 指针类型还决定了指针的步长
    // 指针的步长：指针进行加减运算时，指针的值增加或减少的字节数 int*p; p+1 --> p+4 char*p; p+1 --> p+1
    
}