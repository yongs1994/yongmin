#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

#define ROWS 25
#define COLS 25

void printChunsik(int weight)
{
    if (weight < 20.0)
    {
        printf("😺 ");
    }
    else if (weight < 40.0)
    {
        printf("🐱 ");
    }
    else if (weight < 60.0)
    {
        printf("🐈 ");
    }
    else if (weight < 80.0)
    {
        printf("🦁 ");
    }
    else if (weight < 90.0)
    {
        printf("🐅 ");
    }
}
void printchunsik2(int weight)
{
    if (weight > 20.0)
    {
        printf("20kg 돌파!\n");
    }
    else if (weight > 40.0)
    {
        printf("40kg 돌파!\n");
    }
    else if (weight > 60.0)
    {
        printf("60kg 돌파!\n");
    }
    else if (weight > 80.0)
    {
        printf("80kg 돌파!\n");
    }
    else if (weight > 90.0)
    {
        printf("90kg 돌파!\n");
    }
}
void printMap(int x, int y, float weight)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == x && j == y)
            {
                printChunsik(weight); // 춘식이의 크기에 따라 다른 아이콘 출력
            }
            else
            {
                printf("⬜ ");
            }
        }
        printf("\n");
    }
}
int startGame()
{
    int x = ROWS / 2, y = COLS / 2;
    float weight = 10.0;
    int affection = 0;
    bool isSick = false;
    int death = 0;

    while (weight < 100.0)
    {
        system("clear");
        printMap(x, y, weight);
        affection += 5;

        if (!isSick)
        {
            weight += 0.3; // 밥 먹기
            if (rand() % 2 == 0)
            {
                weight -= 0.2; // 50% 확률로 똥 쌈
                printf("똥을 쌉니다.\n");
            }
        }
        else
        {
            weight -= 0.5; // 병에 걸렸을 때 몸무게 감소
        }

        // 병에 걸릴 확률
        if (!isSick && rand() % 10 == 0)
        {
            isSick = true;
            printf("춘식이가 병에 걸렸습니다!\n");
        }

        // 병에서 회복
        if (isSick && rand() % 100 < affection * 0.1)
        {
            isSick = false;
            printf("춘식이가 회복되었습니다!\n");
        }

        // 병에 걸렸을 때 게임 오버 확률
        if (isSick && rand() % 10 == 0)
        {
            death++;
            printf("게임 오버! 최종 몸무게: %.1fkg, 애정도: %d\n", weight, affection);
            printf("게임을 재시작합니다.\n");
            return 1; // 게임 오버 시 함수를 종료하여 게임을 재시작
        }

        if (weight <= 0)
        {
            printf("춘식이가 굶어 죽었습니다...\n");
            death++;
            return -1; // 몸무게가 0 이하일 때 -1 반환
        }

        // 춘식이 랜덤 이동
        int newX = x + (rand() % 3 - 1); // 새로운 x 위치 계산
        int newY = y + (rand() % 3 - 1); // 새로운 y 위치 계산

        // 배열의 경계를 넘지 않는지 확인
        newX = (newX >= 0 && newX < ROWS) ? newX : x;
        newY = (newY >= 0 && newY < COLS) ? newY : y;

        // 위치 업데이트
        x = newX;
        y = newY;

        printf("춘식이 현재 몸무게: %.1fkg, 애정도: %d\n", weight, affection);
        printchunsik2(weight);
        usleep(100000); // 1초 대기
    }

    printf("성공! 춘식이를 100kg까지 키웠습니다. 최종 몸무게: %.1fkg, 애정도: %d,죽은횟수 %d\n", weight, affection, death);
}

int main()
{
    srand(time(NULL)); // 난수 생성기 초기화

    while (1)
    {
        int result = startGame();
        if (result != 1)
        {
            break;
        } // 게임 시작
    }
    printf("게임 종료");
    return 0;
}