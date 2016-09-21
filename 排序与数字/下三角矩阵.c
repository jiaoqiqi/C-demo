#include<stdio.h>
int main()
{
	int i,j;
	int a[4][4];
	for(i=0;i<4;i++)  /*外循环遍历*/
	{
		for(j=0;j<4;j++)  /*内循环遍历*/
		{
			if(i>=j)
				a[i][j]=1;  /*下三角*/
			else
				a[i][j]=0;
		}
		for(j=0;j<4;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
