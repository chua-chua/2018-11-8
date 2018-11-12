/**

继续上一题。编写一掷骰子游戏，计算机和用户充当对战的双方。
首先由计算机生成一个随机数，然后接受用户输入的字符串"g"命
令后生成用户的随机数（模拟用户掷了一次骰子），比较他们的
大小，如果用户得到的随机数小于计算机得到的，则输出用户输
了，否则输出用户赢了。

*/
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
inline int Dice()				//骰子模拟函数
{
	
	int result = rand() % 6 +1;
	return result;
}
int main()
{
	srand(unsigned(time(NULL)));
	int enemy = Dice();
	printf("对方掷了骰子,结果是:%4d \n",enemy);
	printf("请输入\"g\"并回车,进行掷骰子: \n");
	while( !(getchar()=='g') )
		;
	int player = Dice();
	printf("你掷骰子的结果是:%7d \n",player);
	if( player<enemy )
		printf("你输了! \n");
	else 
		printf("你赢了! \n");
	return 0;
}