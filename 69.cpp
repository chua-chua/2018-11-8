/**
��д����CompactIntegers,ɾ������������ֵΪ0 ��Ԫ�أ�
���Ԫ���������׶��ƶ���ע�⣬CompactIntegers��Ҫ��
�����鼰��Ԫ�ظ�����Ϊ��������������ֵӢ��ɾ������
ִ�к��������Ԫ�ظ�����
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
		else					//��ֵΪ0��λ�ø���
			a[i-num] = a[i];
	}
	return n-num;				//���ط�0����
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