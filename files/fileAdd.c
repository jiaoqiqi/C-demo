#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define LEN 100
void main()
{
	FILE *fp;
	char filename[LEN],data[LEN];
	int i;
	char ch;
	printf("写文章程序　\n");
	printf("请输入要打开文件的完整路径及文件名");
	gets(filename);
	fp=fopen(filename, "a+");//文件以追加方式写
	if(fp==NULL)
	{
		printf("\n文件打开失败,%s可能不存在\n",filename);
		exit(1);
	}
	printf("\n打开文件%s\n",filename);
	printf("文件内容为\n");
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	while(1)
	{
		printf("\n\n请问是否要添加数据(y/n):");
		if(toupper(getche())=='y')
		{
			printf("\n\n输入要添加的数据:");
			gets(data);
			for(i=0 ; i <strlen(data) ; i++)
			{
				fputc(data[i],fp);
			}
		}
		else
		{
			fclose(fp);
			break;
		}
	}
	fp=fopen(filename,"rt");
	if(fp==NULL){
		printf("\n文件打开失败,%s可能不存在\n",filename);
		exit(1);

	}
        printf("\n打开文件%s\n",filename);
        printf("文件内容为\n");
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	fclose(fp);
	printf("\n\n");
}
