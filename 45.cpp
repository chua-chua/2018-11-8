/**
编写程序，接受用户输入的自然数n，调用4 - 14给出的IsPrime
函数终极版输出2~999之间所有的素数。要求每一行打印五个素
数后换行，并保证数据能够右对齐。
*/
#include<stdio.h>
int IsPrime(int n)
{
	if( n<2 )
		return 0;
	for( int i=2;i<=n/2;i++ )
	{
		if( n%i==0 )
			return 0;
	}
	return 1;
}
int main()
{
	int i;
	int count = 0;					//素数计数器
	for( i=2;i<=999;i++ )
	{
		if( IsPrime(i) )
		{
			printf("%8d",i);
			if( !((++count)%5) )	//满5换行
				printf("\n");
		}
	}
	return 0;
}