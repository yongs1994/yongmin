// 1.getchar 및 putchar
#include <stdio.h>

int main()
{
    char ch;

    printf("Type a character: ");
    ch = getchar(); // 한 문자 입력 받기
    putchar(ch);    // 입력 받은 문자 출력

    return 0;
}
// int getchar(void): 표준 입력 스트림에서 한 문자를 읽습니다.
// 읽은 문자를 반환하며, 입력 버퍼에서 한 문자를 제거합니다.
