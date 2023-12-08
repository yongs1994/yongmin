// 방법 2: 포인터를 사용하여 전달
#include <stdio.h>

// 함수 정의: 2차원 배열을 받아서 출력하는 함수
void print2DArray(int *arr, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            // 포인터를 사용하여 배열의 요소에 접근
            printf("%2d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main()
{
    // 2차원 배열 초기화
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // 함수 호출: 배열의 포인터를 전달
    print2DArray((int *)array, 2, 3);

    return 0;
}
