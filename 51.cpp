/**

编写一函数，返回1~6之间的随机数。这个过程模拟了什么？掷骰子

随机种子的放置位置:不能被嵌在循环之内,否则会出现连续产生一样的数

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
	int i;
	int result;
	int count[7] = {0};
	srand(unsigned(time(NULL)));
	for( i=0;i<100000;i++ )			//投掷骰子并计数
	{
		result = Dice();
		count[result] ++;
		printf("%d \n",result);
	}
	printf("震惊!农大某学生做了骰子实验, \n"
		"超越以往数学家,为概率论做出了极大贡献! \n");
	for( i=1;i<=6;i++ )
		printf("	%d	%d \n",i,count[i]);
	return 0;
}