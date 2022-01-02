# define _CRT_SECURE_NO_WARNINGS 1
# include "game.h";
void menu()
{
	printf("************************\n");
	printf("****1.play    0.exit****\n");
	printf("************************\n");
}
void game()
{   
	char ret = 'a';
	char board[Row][Col] = {0};
	//初始化棋盘
	initboard(board, Row, Col);
	displayboard(board, Row, Col);
	
	while (1)
	{
		playermove(board, Row, Col);
		displayboard(board, Row, Col);
		ret = iswin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
		computermove(board, Row, Col);
		displayboard(board, Row, Col);
		ret = iswin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择:\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}