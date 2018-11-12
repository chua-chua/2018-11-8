/**

��֪2007��1��1��Ϊ����һ����ƺ�����ӡ2007���Ժ��ĳ��ĳ�µ�����

ʵ��˼��:����2007��1��1���ڵ�һ�ŵ�λ��,����ĳ��ĳ��1�յĵ�һ��λ�á�
����������1����2007��1�¿�ʼ�ĵڼ���,ȡ����7���ǵ�ǰ��λ��
��������:int IsLeap(int year);���������ж��Ƿ�Ϊ����

*/
#include<stdio.h>
int IsLeap(int year)						//�ж��Ƿ�����
{
	if( year%4 )
		return 0;
	else if( year%400 && !(year%100) )
		return 0;
	return 1;
}
int Calendar(int year,int month)
{
	int i,j;
	int num = 2;							//��ʼ���Ϊ�ڶ�(����һ)
	for( i=2007;i<=year;i++ )
	{
		///////////////  1   2	 3	 4	 5	 6	 7	 8	 9  10  11  12	
		int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//ƽ��
		if( IsLeap(i) )
			m[2] ++;
		if( i==year )
			break;
		for( j=1;j<=12;j++ )				//�������(����֮ǰ�����)
			num += m[j];					
	}
	///////////////  1   2	 3	 4	 5	 6	 7	 8	 9  10  11  12	
	int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//ƽ��
	if( IsLeap(i) )
		m[2] ++;
	for( j=1;j<month;j++ )					//�������(���ϱ������)
		num += m[j];

	num--;
	num %= 7;
	if( !num )								//����,û�е�0
		num = 7;

	//��ʱ,1�ŵľ���λ���Ѿ��ó�,��������ӡ����
	printf("Calendar %d - %d \n",year,month);
	printf("\n----------------------------\n");
	printf("  Su  Mo  Tu  We  Th  Fr  Sa ");
	printf("\n----------------------------\n");

	if( num<7 )								//��������
	{
		for( i=0;i<num;i++ )
			printf("    ");
	}
	
	for( i=1;i<=m[month];i++ )
	{
		printf("%4d",i);
		if( i%7==7-num )
			printf("\n");
	}
	printf("\n----------------------------\n\n\n\n");
	return 0;
}
int main()									//����������2007-2018
{
	int i,j;
	for( i=2007;i<2019;i++ )
	{
		for( j=1;j<=12;j++ )
		{
			Calendar(i,j);
		}
	}
	return 0;
}