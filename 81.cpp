/**

编写程序，从文本文件中读取全部内容，并复制到另一文件中。
要求将文本文件中的所有英文字母都转换成大写后输出

*/
#include<stdio.h>
int main()
{
	FILE *p = NULL;
	p = fopen("1.txt","r");			//准备读取文件
	if( p==NULL )
	{
		printf("打开失败! \n");
		return 0;
	}

	FILE *q = NULL;
	q = fopen("2.txt","w");			//准备创建文件
	if( q==NULL )
	{
		printf("打开失败! \n");
		return 0;
	}

	char c = ' ';
	while ( !feof(p) )				//输出并存入文件中
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