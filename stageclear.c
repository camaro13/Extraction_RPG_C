#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

   
    int attackDamage = rand() % 501 + 500;     
    int defenseSuccessDamage = rand() % 201 + 100; 
    int damageTaken = rand() % 301 + 200;     
    int defenseFailDamage = rand() % 101 + 50;
    double damageMultiplierIncrease = (rand() % 21 + 10); 
    double damageMultiplierDecrease = (rand() % 11 + 5); 
    int acquiredItems = rand() % 4 + 1;     
    int usedRecoveryItems = rand() % 3;      

    int numberUsage[8];
    for (int i = 0; i < 8; i++)
        numberUsage[i] = rand() % 6;         

    printf("---------------스테이지 클리어---------------------\n\n");

    printf("축하합니다. 1스테이지를 모두 클리어 하였습니다.\n");
    printf("획득한 절리품은 모두 인벤토리로 귀속 됩니다.\n");
    printf("전투를 통해 증가한 데미지 배율은 다시 원래 상태로 돌아갑니다.\n");
    printf("아래는 이번 스테이지 전투 결과 입니다.\n\n");

    printf("---------------------------------\n\n");

    printf("공격으로 가한 피해량: %d\n", attackDamage);
    printf("성공적인 방어로 가한 피해량: %d\n", defenseSuccessDamage);
    printf("적으로부터 받은 피해량: %d\n", damageTaken);
    printf("방어 실패로 받은 피해량: %d\n", defenseFailDamage);
    printf("증가한 데미지 배율: %.1f%%\n", damageMultiplierIncrease);
    printf("감소한 데미지 배율: %.1f%%\n", damageMultiplierDecrease);
    printf("획득한 장비 수: %d개\n", acquiredItems);
    printf("사용한 회복 아이템 수: %d개\n\n", usedRecoveryItems);

    printf("숫자 사용 빈도:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d: %d회\t", i + 1, numberUsage[i]);
        if ((i + 1) % 4 == 0) printf("\n");
    }

    return 0;
}
