#include <stdio.h>

int main()
{
    // 2차원 배열 초기화
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // arr[i]와 *(arr + i)는 동일한 표현
    printf("array[0]: %p, *(array + 0): %p\n", (void *)array[0], (void *)*(array + 0));
    printf("array[1]: %p, *(array + 1): %p\n", (void *)array[1], (void *)*(array + 1));

    return 0;
}
//일반화된 포인터: void *는 어떤 타입의 포인터든 가리킬 수 있기 때문에 일반적인 용도로 사용됩니다.
//함수나 데이터 구조에서 모든 종류의 포인터를 다룰 때 편리합니다.