/**

�����û����������n���������n��0~9999֮���������
ʹ�ñ���ʵ�ֵĶ�̬����洢����Ԫ�أ����������ǵ�
����ƽ��ֵ��Ҫ�󾡿���ʹ�ú���ʵ�ֳ�����롣

*/
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int Function(int **p,int n)
{
	srand(unsigned(time(NULL)));
	*p = (int *)malloc(sizeof(int)*n);
	int i;
	int sum = 0;					//��
	float average = 0;				//ƽ����
	for( i=0;i<n;i++ )
	{
		(*p)[i] = rand() % 10000;	//�������
		sum += (*p)[i];
	}
	average = (float)sum / n;
	printf("%d %.1f \n",sum,average);	//������
	return 0;
}
int main()
{
	int n = 5;
	int i;
	int *p = NULL;
	Function(&p,n);
	for( i=0;i<n;i++ )				//��������ӡ����
		printf("%d \n",p[i]);
	free(p);						//�ͷŶ�̬����
	return 0;
}