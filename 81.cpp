/**

��д���򣬴��ı��ļ��ж�ȡȫ�����ݣ������Ƶ���һ�ļ��С�
Ҫ���ı��ļ��е�����Ӣ����ĸ��ת���ɴ�д�����

*/
#include<stdio.h>
int main()
{
	FILE *p = NULL;
	p = fopen("1.txt","r");			//׼����ȡ�ļ�
	if( p==NULL )
	{
		printf("��ʧ��! \n");
		return 0;
	}

	FILE *q = NULL;
	q = fopen("2.txt","w");			//׼�������ļ�
	if( q==NULL )
	{
		printf("��ʧ��! \n");
		return 0;
	}

	char c = ' ';
	while ( !feof(p) )				//����������ļ���
	{
		c = fgetc(p);
//		printf("%c",c);
		if( c>='a' && c<='z' )
			c -= 32;
		printf("%c",c);
		fprintf(q,"%c",c);
	}
	fclose(p);
	fclose(q);
	return 0;
}