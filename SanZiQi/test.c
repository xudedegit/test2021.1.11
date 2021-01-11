#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void game(void)
{

	char board[ROW][COL] = {0};
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);



}
void menu(void)
{

	printf("***********************\n");
	printf("****1.play   0.exit****\n");
	printf("***********************\n");


}


void test(void)
{
	int input;
	
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			break;

		};

	} while(input);



}



int main()
{

	test();
	return 0;
}