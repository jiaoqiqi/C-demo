#include<stdio.h>
#include<stdlib.h>
//#include<io.h>
#define LEN 100

void main()
{
        FILE *fp;    
        char filename[LEN];
  //      int fno,fsize;
        char ch;
        printf("输入要打开文件的路径及文件名");
        gets(filename);
        fp=fopen(filename,"rt");　
        if(fp==NULL)
        {
                printf("\n打开文件失败,%s可能不存在\n",filename);
                exit(1);
        } 
    //    fno=fileno(fp);
      //  fsize=filelength(fno);
        printf("\n%s打开文件\n",filename);
//	printf("\n文件大小%d Bytes\n",fsize);
	printf("\n:文件内容为");
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	fclose(fp);
	printf("\n");
}
