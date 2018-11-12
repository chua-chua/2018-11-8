/**
编写函数CompactIntegers,删除数组中所有值为0 的元素，
其后元素向数组首端移动。注意，CompactIntegers需要接
收数组及其元素个数作为参数，函数返回值英文删除操作
执行后数组的新元素个数。
*/
#include<stdio.h>
int CompactIntegers(int *a,int n)
{
	int num = 0;
	int i;
	for( i=0;i<n;i++ )
	{
		if( a[i]==0 )
			num ++;
		else					//把值为0的位置覆盖
			a[i-num] = a[i];
	}
	return n-num;				//返回非0数量
}
int main()
{
	//				   5		10
	int a[13] = {4,0,5,1,6,5,1,0,8,0,0,0,6};
	int i;
	int num = CompactIntegers(a,13);
	for( i=0;i<num;i++ )
		printf("%d ",a[i]);
	return 0;
}