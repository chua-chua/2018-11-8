/**
�������ʵ�ֱ�׼�ַ������strcmp����
*/
#include<stdio.h>
#include<string.h>
int Strcmp(const char *a,const char *b)
{
	int i = 0;
	for( i=0;a[i]!='\0' && b[i]!='\0';i++ )	//��ͬ��һ���˳�ѭ��
	{
		if( !(a[i]==b[i]) )		//����ͬ�ͷ���1��-1
			return a[i] > b[i] ? 1 : -1;	
	}
	return 0;
}
int main()
{
	char *a = "abc";
	char *b = "abdhh";
	char *c = "abc";
	printf("%d \n",strcmp(a,b));
	printf("%d \n",strcmp(a,c));
	printf("%d \n",strcmp(b,a));
	printf("___________________\n");

	printf("%d \n",Strcmp(a,b));
	printf("%d \n",Strcmp(a,c));
	printf("%d \n",Strcmp(b,a));
	return 0;
}