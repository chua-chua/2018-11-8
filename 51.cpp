/**

��дһ����������1~6֮�����������������ģ����ʲô��������

������ӵķ���λ��:���ܱ�Ƕ��ѭ��֮��,����������������һ������

*/
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
inline int Dice()				//����ģ�⺯��
{
	
	int result = rand() % 6 +1;
	return result;
}
int main()
{
	int i;
	int result;
	int count[7] = {0};
	srand(unsigned(time(NULL)));
	for( i=0;i<100000;i++ )			//Ͷ�����Ӳ�����
	{
		result = Dice();
		count[result] ++;
		printf("%d \n",result);
	}
	printf("��!ũ��ĳѧ����������ʵ��, \n"
		"��Խ������ѧ��,Ϊ�����������˼�����! \n");
	for( i=1;i<=6;i++ )
		printf("	%d	%d \n",i,count[i]);
	return 0;
}