/**

接受用户输入的整数n，随机生成n个0~9999之间的整数，
使用本章实现的动态数组存储所有元素，并计算他们的
和与平均值。要求尽可能使用函数实现程序代码。

*/
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int Function(int **p,int n)
{
	srand(unsigned(time(NULL)));
	*p = (int *)malloc(sizeof(int)*n);
	int i;
	int sum = 0;					//和
	float average = 0;				//平均数
	for( i=0;i<n;i++ )
	{
		(*p)[i] = rand() % 10000;	//随机产生
		sum += (*p)[i];
	}
	average = (float)sum / n;
	printf("%d %.1f \n",sum,average);	//输出结果
	return 0;
}
int main()
{
	int n = 5;
	int i;
	int *p = NULL;
	Function(&p,n);
	for( i=0;i<n;i++ )				//主函数打印数组
		printf("%d \n",p[i]);
	free(p);						//释放动态数组
	return 0;
}