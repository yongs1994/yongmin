#include <stdio.h>

int main()
{
    char name[50];
    int age;

    // 사용자에게 이름을 입력받음
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // 개행 문자를 찾아서 NULL로 대체
    for (int i = 0; i < sizeof(name); ++i)
    {
        if (name[i] == '\n')
        {
            name[i] = '\0';
            break;
        }
    }

    // 사용자에게 나이를 입력받음
    printf("Enter your age: ");
    scanf("%d", &age);

    // 버퍼에 남아있는 개행 문자를 비우기 위해 getchar 호출
    getchar();

    // 입력 받은 정보를 출력
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
