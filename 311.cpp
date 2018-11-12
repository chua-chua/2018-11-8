/**

已知2007年1月1日为星期一。设计函数打印2007年以后的某年某月的日历

实现思想:根据2007年1月1日在第一排的位置,计算某年某月1日的第一排位置。
先算该年该月1日是2007年1月开始的第几日,取余于7即是当前的位置
辅助函数:int IsLeap(int year);————判断是否为闰年

*/
#include<stdio.h>
int IsLeap(int year)						//判断是否闰年
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
	int num = 2;							//初始序号为第二(星期一)
	for( i=2007;i<=year;i++ )
	{
		///////////////  1   2	 3	 4	 5	 6	 7	 8	 9  10  11  12	
		int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//平年
		if( IsLeap(i) )
			m[2] ++;
		if( i==year )
			break;
		for( j=1;j<=12;j++ )				//序号运算(本年之前的年份)
			num += m[j];					
	}
	///////////////  1   2	 3	 4	 5	 6	 7	 8	 9  10  11  12	
	int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//平年
	if( IsLeap(i) )
		m[2] ++;
	for( j=1;j<month;j++ )					//序号运算(加上本年序号)
		num += m[j];

	num--;
	num %= 7;
	if( !num )								//修正,没有第0
		num = 7;

	//此时,1号的具体位置已经得出,接下来打印历表
	printf("Calendar %d - %d \n",year,month);
	printf("\n----------------------------\n");
	printf("  Su  Mo  Tu  We  Th  Fr  Sa ");
	printf("\n----------------------------\n");

	if( num<7 )								//首行缩进
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
int main()									//主函数测试2007-2018
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