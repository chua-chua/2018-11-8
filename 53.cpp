/**

挑战性问题。继续上一题。重复进行游戏，只有在用户输入了"q"
或"Q"之后才推出游戏。此外，游戏初始时由用户充当庄家，计算
机充当闲家。庄家先掷骰子，如果闲家掷的点数不大于闲家，则
判庄家赢。下回合由上一回合输了的玩家充当庄家先掷骰子。游
戏结束时输出用户游戏回合数与胜率。当然，根据不同胜率输出
鼓励信息也是非常有必要的--不来点鼓励，誰还愿意再玩这破游戏？

*/
#include<time.h>
#include<conio.h>
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
	int enemy	= 0;			//计算机点数
	int player	= 0;			//玩家点数
	int count	= 0;			//总局数
	int victory = 0;			//胜利局数
	int banker	= 1;			//是否庄家
	int over	= 0;			//是否结束
	char ch;
	while (1)
	{
		if( banker )			//玩家庄家
		{
			printf("请输入\"g\"或\"G\"进行掷骰子,\"q\"或\"Q\"退出: \n");	
			while (1)
			{
				ch = getch();
				if( ch=='g' || ch=='G' )
					break;
				else if( ch=='q' || ch=='Q' )
				{
					over = 1;
					break;
				}
			}
			if( over )
				break;
			player = Dice();
			printf("你掷了骰子,结果是:%10d \n",player);					
			enemy = Dice();
			printf("对方掷骰子的结果是:%9d \n",enemy);

			if( enemy<=player )	//宣布回合结果
			{
				printf("你赢了! \n\n");
				banker = 0;
				victory ++;
			}
			else 
				printf("你输了! \n\n");
		}
		else					//计算机庄家
		{
			enemy = Dice();
			printf("对方掷骰子的结果是:%9d \n",enemy);
			printf("请输入\"g\"或\"G\"进行掷骰子,\"q\"或\"Q\"退出: \n");	
			while (1)
			{
				ch = getch();
				if( ch=='g' || ch=='G' )
					break;
				else if( ch=='q' || ch=='Q' )
				{
					over = 1;
					break;
				}
			}
			if( over )
				break;
			player = Dice();
			printf("你掷了骰子,结果是:%10d \n",player);	
			if( enemy<player )
			{
				printf("你赢了! \n\n");
				banker = 0;
				victory ++;
			}
			else 
			{
				printf("你输了! \n\n");
				banker = 1;
			}
		}
		count ++;
	}

							//宣布总体情况
	printf("\n\n");
	printf("总共:%d \n",count);
	printf("胜利:%d \n",victory);
	printf("胜率:%.1f%% \n",(float)victory*100/count);
	if( count==victory )					//全胜
		printf("赌圣! \n");
	else if( count-victory<victory )		//胜率>50%
		printf("你距离赌圣还差一点点. \n");
	else									//胜率<=50%
		printf("你今天运气不好,遇到赌圣了. \n");
	return 0;
}