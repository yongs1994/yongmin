#include <stdio.h>

int main()
{
    // 배열 포인터 배열 포인터는 배열을 가리키는 포인터입니다.
    int array[3][4];
    int(*ptr)[4] = array; // 배열 포인터

    // 포인터 배열     포인터 배열은 포인터들의 배열을 나타냅니다.
    int num1 = 10, num2 = 20, num3 = 30;
    int *ptrArray[3] = {&num1, &num2, &num3}; // 포인터 배열

    // 배열 포인터 사용
    printf("Array Pointer: %p\n", (void *)ptr);

    // 포인터 배열 사용
    for (int i = 0; i < 3; ++i)
    {
        printf("Pointer Array[%d]: %p -> %d\n", i, (void *)ptrArray[i], *ptrArray[i]);
    }

    return 0;
}

// 간단히 말하면, "배열 포인터"는 특정한 배열을 가리키는 포인터로서
// 그 자체가 배열을 표현하는 것이라고 할 수 있습니다. 반면에 "포인터 배열"은 서로 다른 데이터를 가리키는 여러 포인터들을 모아놓은 배열로서,
// 각각의 포인터가 독립적으로 다른 데이터를 가리키는 것입니다.
