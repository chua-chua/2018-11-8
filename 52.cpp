/**

������һ�⡣��дһ��������Ϸ����������û��䵱��ս��˫����
�����ɼ��������һ���������Ȼ������û�������ַ���"g"��
��������û����������ģ���û�����һ�����ӣ����Ƚ����ǵ�
��С������û��õ��������С�ڼ�����õ��ģ�������û���
�ˣ���������û�Ӯ�ˡ�

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
	srand(unsigned(time(NULL)));
	int enemy = Dice();
	printf("�Է���������,�����:%4d \n",enemy);
	printf("������\"g\"���س�,����������: \n");
	while( !(getchar()=='g') )
		;
	int player = Dice();
	printf("�������ӵĽ����:%7d \n",player);
	if( player<enemy )
		printf("������! \n");
	else 
		printf("��Ӯ��! \n");
	return 0;
}