/**
��дһ����gcd,�����������������Լ��
*/
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int gcd(int m,int n)	//����m��n����,���Լ���ض�Ϊ��
{
	if( n*m==0 )
		return 0;
	m = m > 0 ? m : -m;	//��m��nת��������,�÷���ֵΪ��
	n = n > 0 ? n : -n;
	int r;				//����remainder
	r = m % n;
	while( r )
	{
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}
int main()				//����������
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