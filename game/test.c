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
	//��ʼ������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
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
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��:\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}