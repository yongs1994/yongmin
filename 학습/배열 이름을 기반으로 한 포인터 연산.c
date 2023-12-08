#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // 배열 이름을 기반으로 한 포인터 선언
    int *ptr = arr;

    // 배열의 첫 번째 원소 출력
    printf("Value at arr[0]: %d\n", *ptr);

    // 배열의 두 번째 원소 출력
    printf("Value at arr[1]: %d\n", *(ptr + 1));

    // 배열의 세 번째 원소 출력
    printf("Value at arr[2]: %d\n", *(ptr + 2));

    return 0;
}
