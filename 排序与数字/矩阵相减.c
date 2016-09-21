#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3]={1,5,4,6,7,5,3,5,9};
	int b[3][3]={4,7,2,6,7,9,0,3,7};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",b[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	a[i][j]=a[i][j]-b[i][j];
			printf("%4d",a[i][j]);
		}
		printf("\n");
		
	}
}
