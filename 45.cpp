/**
��д���򣬽����û��������Ȼ��n������4 - 14������IsPrime
�����ռ������2~999֮�����е�������Ҫ��ÿһ�д�ӡ�����
�����У�����֤�����ܹ��Ҷ��롣
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
	int count = 0;					//����������
	for( i=2;i<=999;i++ )
	{
		if( IsPrime(i) )
		{
			printf("%8d",i);
			if( !((++count)%5) )	//��5����
				printf("\n");
		}
	}
	return 0;
}