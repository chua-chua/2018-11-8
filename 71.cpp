/**
��д�����������n��Ԫ�ص�����������Ԫ�ص�ƽ��ֵ��
Ҫ���ں����ڲ�ʹ��ָ���������Ԫ�ء�
*/
#include<stdio.h>
float Average(int *a,int n)	//��ƽ����
{
	float answer = 0;
	int i;
	for( i=0;i<5;i++ )		//���
		answer += *(a+i);
	return answer / n;		//����ƽ����
}
int main()
{
	int a[5] = {4, 5, 6, 7, 8};
	printf("%.1f \n",Average(a,5));
	return 0;
}