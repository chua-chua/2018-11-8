/**
假设有一对小兔子，一个月后成长为大兔子，从第二个月开始，
每对大兔子生一对小兔子。不考虑兔子的死亡，设计算法求第n
个月的兔子总数。你是如何将此问题抽象为计算机可解决的问题的？

模拟斐波那契数列1,1,2,3,5,8……

*/
#include<stdio.h>
int Fibonacci(int n)
{
	int fib = 1;
	if( n==1 || n==2 )
		return 1;
	else
		fib = Fibonacci(n-1)+Fibonacci(n-2);
	return fib;
}
int main()
{
	int i;
	for( i=1;i<20;i++ )			//计算前20个月的兔子数据
		printf("%d	%d \n",i,Fibonacci(i));
	return 0;
}