#include <stdio.h>

int main()
{
    int twoDArray[3][4];

    // 포인터 형식 선언
    int(*ptr)[4] = twoDArray;

    // 배열 초기화
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            twoDArray[i][j] = i * 4 + j + 1; // 배열 요소에 값을 할당하는데 사용되는 수식입니다.
        }
    }

    // 배열 값 출력
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
