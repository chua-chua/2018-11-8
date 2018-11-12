/**
编写函数，求包含n个元素的整数数组中元素的平均值。
要求在函数内部使用指针操作数组元素。
*/
#include<stdio.h>
float Average(int *a,int n)	//求平均数
{
	float answer = 0;
	int i;
	for( i=0;i<5;i++ )		//求和
		answer += *(a+i);
	return answer / n;		//返回平均数
}
int main()
{
	int a[5] = {4, 5, 6, 7, 8};
	printf("%.1f \n",Average(a,5));
	return 0;
}