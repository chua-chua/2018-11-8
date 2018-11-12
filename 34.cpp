/**
编写一函数IsPrime,判断某个大于2的正整数是否为素数
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
int main()			//测试IsPrime函数
{
	int i;
	for( i=-5;i<50;i++ )
		printf("%d	%d \n",i,IsPrime(i));
	return 0;
}
