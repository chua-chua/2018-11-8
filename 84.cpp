/**
��д���򣬶�ȡһ���ı��ļ���ͳ�����е�Ӣ����ĸ��
�����ַ��ĸ�����ȫ���ַ������뵥�ʸ�����ע�⣬��
�񡢻س���tab�����Լ����б����ţ����������ַ���
�»��ߣ���������ΪӢ���ı��е��ʵķָ���ǡ�
*/
#include<stdio.h>
int Number_of_words(FILE*p)
{
	int count = 0;
	char c = ' ';
	int prior	= 0;				//��һ���Ƿ���ĸ
	int now		= 0;				//��ǰ�Ƿ���ĸ
	while ( !feof(p) )				
	{
		prior = now;					//ˢ����һ���ַ�������
		c = fgetc(p);
		printf("%c",c);
		if( !(	(c>='a' && c<='z')	||	//�����ǰ������ĸ
			(c>='A' && c<='Z'))	)
			now = 0;
		else							//�����ǰ����ĸ
			now = 1;
		if( c=='-' || c=='_' )			//�����ָ���
			now = 1;
		if( now==1 && prior==0 )		//��ǰ����ĸ��ǰһ���ķָ���,ͳ��
			count++;
	}
	return count;
}
int main()
{
	FILE *p = NULL;
	p = fopen("3.txt","r");				//׼����ȡ�ļ�
	if( p==NULL )
	{
		printf("��ʧ��! \n");
		return 0;
	}
	
	int num = Number_of_words(p);
	printf("\n________________________\n\n");
	printf("Counts of words:%d \n\n\n",num);
	fclose(p);
	return 0;
}