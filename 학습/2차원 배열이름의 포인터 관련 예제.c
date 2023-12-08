#include <stdio.h>

int main()
{
    // 3행 4열의 2차원 배열 선언
    int twoDArray[3][4];

    // 배열 초기화
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            twoDArray[i][j] = i * 4 + j + 1;
        }
    }

    // 배열 이름을 기반으로 하는 포인터 선언
    int(*ptr)[4] = twoDArray;

    // 배열 값 출력
    printf("2차원 배열의 값:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%2d ", ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
