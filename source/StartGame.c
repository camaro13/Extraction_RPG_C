#include "StartGame.h"

int main()
{
	int input;

	printf("---------------------------------------\n");
	printf("               게임이름                 \n");
	printf("1. 게임 시작\n");
	printf("2. 데이터 삭제\n");
	printf("3. 종료\n");

	printf("입력 : ");
	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
		OpenMainMenu();
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("게임을 종료합니다.");
		break;
	default:
		printf("잘못된 값을 입력했습니다.\n");
		break;
	}
}

void CreateSaveFile()
{
	FILE* fp = fopen("savefile.txt", "w");
	fputs("", fp);
	fclose(fp);
}
/*
FILE* fp = fopen("test.txt", "r");  //test파일을 r(읽기) 모드로 열기
char buffer[MAX] = { 0, };

fread(buffer, 1, MAX, fp); //전체 읽기
printf("%s", buffer);

fclose(fp); //파일 포인터 닫기
*/