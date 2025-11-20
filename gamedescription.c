#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
int main(void)
{
    int page = 1;
    int input;
    int maxPage = 3;
    const int width = 25; 

    while (1)
    {
        printf("---------------------------\n");

        char title[] = "장비 도감";
        int padding = (width - (int)strlen(title)) / 2;
        for (int i = 0; i < padding; i++) printf(" ");
        printf("%s\n", title);

        printf("---------------------------\n\n");

        printf("-- 페이지 %d --\n", page);

        switch (page)
        {
        case 1:
            for (int i = 1; i <= 6; i++)
                printf("%d\n", i);
            break;
        case 2:
            for (int i = 7; i <= 12; i++)
                printf("%d\n", i);
            break;
        case 3:
            for (int i = 13; i <= 18; i++)
                printf("%d\n", i);
            break;
        default:
            printf("페이지가 없습니다.\n");
            break;
        }

        printf("\n1. 이전 페이지  2. 다음 페이지  3. 메인메뉴\n");
        printf("입력 : ");
        scanf_s("%d", &input);
        printf("\n");

        if (input == 1)
        {
            if (page > 1) page--;
            else printf("첫 페이지입니다.\n\n");
        }
        else if (input == 2)
        {
            if (page < maxPage) page++;
            else printf("마지막 페이지입니다.\n\n");
        }
        else if (input == 3)
        {
            printf("메인 메뉴로 돌아갑니다.\n");
            break;
        }
        else
        {
            printf("잘못된 값을 입력했습니다.\n\n");
        }
    }

    return 0;
}
