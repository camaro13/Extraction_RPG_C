#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int stage;

    printf("------------------------------------------\n");
    printf("                  맵 선택                  \n\n");
    printf("1. 스테이지 1\n");
    printf("2. 스테이지 2\n");
    printf("3. 스테이지 3\n\n");
    printf("입력 : ");
    scanf_s("%d", &stage);
    printf("------------------------------------------\n");

    switch (stage)
    {
    case 1: printf("스테이지 1 선택\n"); break;
    case 2: printf("스테이지 2 선택\n"); break;
    case 3: printf("스테이지 3 선택\n"); break;
    default: printf("잘못된 값을 입력했습니다.\n"); break;
    }

    return 0;
}
