#include <stdio.h>

int main()
{
    int num = 42;
    int *ptr = &num; // 정수형 변수를 가리키는 포인터

    int **doublePtr = &ptr; // 이중 포인터, 포인터를 가리키는 포인터

    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);
    printf("Value of num using double pointer: %d\n", **doublePtr);

    return 0;
}