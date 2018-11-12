/**
编写一函数gcd,求两个正整数的最大公约数
*/
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int gcd(int m,int n)	//不论m、n正负,最大公约数必定为正
{
	if( n*m==0 )
		return 0;
	m = m > 0 ? m : -m;	//将m、n转换成正数,让返回值为正
	n = n > 0 ? n : -n;
	int r;				//余数remainder
	r = m % n;
	while( r )
	{
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}
int main()				//主函数测试
{
	int a,b;
	srand(unsigned int(time(NULL)));
	for( int i=0;i<50;i++ )
	{
		a = rand()%100;
		b = rand()%100;
		printf("%d	%d	%d \n",a,b,gcd(a,b));
	}
	return 0;
}