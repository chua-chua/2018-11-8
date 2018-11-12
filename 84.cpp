/**
编写程序，读取一个文本文件，统计其中的英文字母与
数字字符的个数，全部字符个数与单词个数。注意，空
格、回车、tab键，以及所有标点符号（不包括连字符和
下划线）都可能作为英文文本中单词的分隔标记。
*/
#include<stdio.h>
int Number_of_words(FILE*p)
{
	int count = 0;
	char c = ' ';
	int prior	= 0;				//上一个是否字母
	int now		= 0;				//当前是否字母
	while ( !feof(p) )				
	{
		prior = now;					//刷新上一个字符的属性
		c = fgetc(p);
		printf("%c",c);
		if( !(	(c>='a' && c<='z')	||	//如果当前不是字母
			(c>='A' && c<='Z'))	)
			now = 0;
		else							//如果当前是字母
			now = 1;
		if( c=='-' || c=='_' )			//遇到分隔符
			now = 1;
		if( now==1 && prior==0 )		//当前是字母，前一个的分隔符,统计
			count++;
	}
	return count;
}
int main()
{
	FILE *p = NULL;
	p = fopen("3.txt","r");				//准备读取文件
	if( p==NULL )
	{
		printf("打开失败! \n");
		return 0;
	}
	
	int num = Number_of_words(p);
	printf("\n________________________\n\n");
	printf("Counts of words:%d \n\n\n",num);
	fclose(p);
	return 0;
}