/**
返回给定字符串s中的元音字母的首次出现位置。
英语元音字母只有"a"、"e"、"i"、"o"、"u"五个。
*/
#include<stdio.h>
#include<string.h>
int Vowel(char *s)			//返回值为:数组从左往右以1开头的编号
{							//如果不存在元音字母,返回-1
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