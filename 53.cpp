/**

��ս�����⡣������һ�⡣�ظ�������Ϸ��ֻ�����û�������"q"
��"Q"֮����Ƴ���Ϸ�����⣬��Ϸ��ʼʱ���û��䵱ׯ�ң�����
���䵱�мҡ�ׯ���������ӣ�����м����ĵ����������мң���
��ׯ��Ӯ���»غ�����һ�غ����˵���ҳ䵱ׯ���������ӡ���
Ϸ����ʱ����û���Ϸ�غ�����ʤ�ʡ���Ȼ�����ݲ�ͬʤ�����
������ϢҲ�Ƿǳ��б�Ҫ��--������������l��Ը������������Ϸ��

*/
#include<time.h>
#include<conio.h>
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
	int enemy	= 0;			//���������
	int player	= 0;			//��ҵ���
	int count	= 0;			//�ܾ���
	int victory = 0;			//ʤ������
	int banker	= 1;			//�Ƿ�ׯ��
	int over	= 0;			//�Ƿ����
	char ch;
	while (1)
	{
		if( banker )			//���ׯ��
		{
			printf("������\"g\"��\"G\"����������,\"q\"��\"Q\"�˳�: \n");	
			while (1)
			{
				ch = getch();
				if( ch=='g' || ch=='G' )
					break;
				else if( ch=='q' || ch=='Q' )
				{
					over = 1;
					break;
				}
			}
			if( over )
				break;
			player = Dice();
			printf("����������,�����:%10d \n",player);					
			enemy = Dice();
			printf("�Է������ӵĽ����:%9d \n",enemy);

			if( enemy<=player )	//�����غϽ��
			{
				printf("��Ӯ��! \n\n");
				banker = 0;
				victory ++;
			}
			else 
				printf("������! \n\n");
		}
		else					//�����ׯ��
		{
			enemy = Dice();
			printf("�Է������ӵĽ����:%9d \n",enemy);
			printf("������\"g\"��\"G\"����������,\"q\"��\"Q\"�˳�: \n");	
			while (1)
			{
				ch = getch();
				if( ch=='g' || ch=='G' )
					break;
				else if( ch=='q' || ch=='Q' )
				{
					over = 1;
					break;
				}
			}
			if( over )
				break;
			player = Dice();
			printf("����������,�����:%10d \n",player);	
			if( enemy<player )
			{
				printf("��Ӯ��! \n\n");
				banker = 0;
				victory ++;
			}
			else 
			{
				printf("������! \n\n");
				banker = 1;
			}
		}
		count ++;
	}

							//�����������
	printf("\n\n");
	printf("�ܹ�:%d \n",count);
	printf("ʤ��:%d \n",victory);
	printf("ʤ��:%.1f%% \n",(float)victory*100/count);
	if( count==victory )					//ȫʤ
		printf("��ʥ! \n");
	else if( count-victory<victory )		//ʤ��>50%
		printf("������ʥ����һ���. \n");
	else									//ʤ��<=50%
		printf("�������������,������ʥ��. \n");
	return 0;
}