# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include "game.h"
void menu()
{
	printf("********************************\n");
	printf("********      1.play   *********\n");
	printf("********      0.exit   *********\n");
	printf("********************************\n");
}
void game()
{
	printf("ɨ��\n");
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);
	findmine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}