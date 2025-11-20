#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

    char head[20] = "없음";
    char body[20] = "없음";
    char legs[20] = "없음";
    char weapon[20] = "없음";

   
    int hp = rand() % 101 + 50;              
    double damageMultiplier = (rand() % 51 + 50) / 100.0;

  
    int usable[4];
    char type[4][10];
    for (int i = 0; i < 4; i++)
    {
        usable[i] = rand() % 8 + 1; 
        if (usable[i] >= 1 && usable[i] <= 4)
            strcpy(type[i], "공격");
        else
            strcpy(type[i], "방어");
    }

    printf("------------------------------------------\n");
    printf("                 인벤토리                 \n\n");

    printf("착용중인 장비:\n");
    printf("머리  : %s\n", head);
    printf("몸통  : %s\n", body);
    printf("다리  : %s\n", legs);
    printf("무기  : %s\n\n", weapon);

    printf("스탯:\n");
    printf("체력: %d\t데미지 배율: %.2f\n\n", hp, damageMultiplier);

    printf("사용 가능 숫자:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d (%s)\t", usable[i], type[i]);
    }
    printf("\n\n------------------------------------------\n\n");

    printf("보유 장비:\n");
    printf("1. -- 투구\n");
    printf("2. -- 갑옷\n");
    printf("3. -- 바지\n");
    printf("4. -- 검\n\n");

    int choice;
    printf("착용 장비 입력: ");
    scanf_s("%d", &choice);
    printf("------------------------------------------\n");

    switch (choice)
    {
    case 1: strcpy(head, "-- 투구"); break;
    case 2: strcpy(body, "-- 갑옷"); break;
    case 3: strcpy(legs, "-- 바지"); break;
    case 4: strcpy(weapon, "-- 검"); break;
    default: printf("잘못된 값을 입력했습니다.\n"); break;
    }

    printf("선택 완료! 착용 장비 상태:\n");
    printf("머리  : %s\n", head);
    printf("몸통  : %s\n", body);
    printf("다리  : %s\n", legs);
    printf("무기  : %s\n", weapon);

    return 0;
}
