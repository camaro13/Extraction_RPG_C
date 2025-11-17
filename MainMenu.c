#include "MainMenu.h"

#define MAX 1000

void OpenMainMenu()
{
	int input;

	printf("---------------------------------------\n");
	printf("                메인메뉴                \n\n");
	printf("1. 맵\n");
	printf("2. 인벤토리\n");
	printf("3. 상점\n");
	printf("4. 장비 도감\n");
	printf("5. 공격 설명(미정)\n");
	printf("6. 저장\n");
	printf("7. 종료\n\n");
	printf("입력 : ");
	scanf_s("%d", &input);
	printf("---------------------------------------\n");

	switch (input)
	{
	case 1:
		PrintMap_arr();
		break;
	case 2:
		Print_Inventory();
		break;
	case 3:
		PrintStore();
		break;
	case 4:
		PrintIllustratedGuide();
		break;
	case 5:
		PrintDescription();
		break;
	case 6:
		SaveGame();
		break;
	case 7:
		exit(0);
		break;
	default:
		printf("잘못된 값을 입력했습니다.\n");
		break;
	}
}

void SaveGame()
{
	FILE* fp = fopen("savefile.txt", "r");
	char buffer[MAX] = { 0, };

	fread(buffer, 1, MAX, fp); 
	printf("%s", buffer);

	fclose(fp);
}
