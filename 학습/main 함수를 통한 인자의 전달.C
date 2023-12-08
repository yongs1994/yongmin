#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // 프로그램 실행 시 인자의 개수를 확인
    if (argc != 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1; // 프로그램 종료 코드
    }

    // 명령행에서 전달된 두 개의 숫자를 정수로 변환
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // 숫자를 더해서 출력
    printf("Sum: %d\n", num1 + num2);

    return 0;
}
