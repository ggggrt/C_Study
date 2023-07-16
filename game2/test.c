#include "game.h"
void menu()
{
	printf("*******************************");
	printf("*********** 1.play ************");
	printf("*********** 0.exit ************");
	printf("*******************************");
}


void game() 
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	// 初始化
	InitBoard(mine, ROWS, COLS, '*');
	// InitBoard(show, ROWS, COLS, '0');

}

void test()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
}

void main()
{
    test();
}