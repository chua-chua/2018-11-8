/**
������һ��С���ӣ�һ���º�ɳ�Ϊ�����ӣ��ӵڶ����¿�ʼ��
ÿ�Դ�������һ��С���ӡ����������ӵ�����������㷨���n
���µ�����������������ν����������Ϊ������ɽ��������ģ�

ģ��쳲���������1,1,2,3,5,8����

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
	for( i=1;i<20;i++ )			//����ǰ20���µ���������
		printf("%d	%d \n",i,Fibonacci(i));
	return 0;
}