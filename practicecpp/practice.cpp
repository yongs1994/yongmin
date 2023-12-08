#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

#define ROWS 25
#define COLS 25

typedef struct
{
    int x, y;
    float weight;
    int affection;
    bool isSick;
} Chunsik;

typedef struct
{
    Chunsik chunsik;
    int deathCount;
} GameState;

void printChunsik(float weight)
{
    if (weight < 20.0)
        printf("😺 ");
    else if (weight < 40.0)
        printf("🐱 ");
    else if (weight < 60.0)
        printf("🐈 ");
    else if (weight < 80.0)
        printf("🦁 ");
    else if (weight < 90.0)
        printf("🐅 ");
}

void printMap(GameState *game)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == game->chunsik.x && j == game->chunsik.y)
                printChunsik(game->chunsik.weight);
            else
                printf("⬜ ");
        }
        printf("\n");
    }
}

int startGame(GameState *game)
{
    game->chunsik.x = ROWS / 2;
    game->chunsik.y = COLS / 2;
    game->chunsik.weight = 10.0;
    game->chunsik.affection = 0;
    game->chunsik.isSick = false;
    game->deathCount = 0;

    while (game->chunsik.weight < 100.0)
    {
        system("clear");
        printMap(game);
        game->chunsik.affection += 5;

        // Rest of the game logic...
        // Similar to your original code, but using 'game->chunsik' to access Chunsik's properties.

        printf("Current Weight: %.1fkg, Affection: %d\n", game->chunsik.weight, game->chunsik.affection);
        usleep(100000); // 1초 대기
    }

    printf("성공! 춘식이를 100kg까지 키웠습니다. 최종 몸무게: %.1fkg, 애정도: %d, 죽은 횟수: %d\n", game->chunsik.weight, game->chunsik.affection, game->deathCount);
    return 0;
}

int main()
{
    srand(time(NULL)); // 난수 생성기 초기화
    GameState game;

    startGame(&game);

    printf("게임 종료\n");
    return 0;
}
