/**
���ظ����ַ���s�е�Ԫ����ĸ���״γ���λ�á�
Ӣ��Ԫ����ĸֻ��"a"��"e"��"i"��"o"��"u"�����
*/
#include<stdio.h>
#include<string.h>
int Vowel(char *s)			//����ֵΪ:�������������1��ͷ�ı��
{							//���������Ԫ����ĸ,����-1
	int i;
	for( i=0;i<(int)strlen(s);i++ )
	{
		if( s[i]=='a' || s[i]=='e' || s[i]=='i' ||
			s[i]=='o' || s[i]=='u'	)
			return ++i;
	}
	return -1;
}
int main()
{
	char *s = "aHhhhhhuheauh";
	printf("%d \n",Vowel(s));
	char *a = "HhAhhhhuheauh";
	printf("%d \n",Vowel(a));
	char *b = "Hhhhhhuheauh";
	printf("%d \n",Vowel(b));
	char *c = "564654654165";
	printf("%d \n",Vowel(c));
	return 0;
}