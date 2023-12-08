// 방법 1: 배열의 크기를 명시적으로 전달
#include <stdio.h>

// 함수 정의: 2차원 배열을 받아서 출력하는 함수
void print2DArray(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // 2차원 배열 초기화
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // 함수 호출: 배열의 크기를 명시적으로 전달
    print2DArray(array, 2, 3);

    return 0;
}
