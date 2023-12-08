#include <stdio.h>

// 이중 포인터를 이용한 두 포인터 변수 교환 함수
void swapPointers(int **ptr1, int **ptr2)
{
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a = 5;
    int b = 10;

    int *ptrA = &a;
    int *ptrB = &b;

    printf("Before swap: *ptrA = %d, *ptrB = %d\n", *ptrA, *ptrB);

    // swapPointers 함수 호출
    swapPointers(&ptrA, &ptrB);

    printf("After swap: *ptrA = %d, *ptrB = %d\n", *ptrA, *ptrB);

    return 0;
}
