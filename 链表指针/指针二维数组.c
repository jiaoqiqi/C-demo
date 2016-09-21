#include<stdio.h>
void main()
{
	int a[3][4],i,j;
	int minRow=0,minCol=0;
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			scanf("%d",a[i]+j);
		}
	}
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(*a[i]+j<a[minRow][minCol])
			{
				minRow=i;
				minCol=j;
			}
		}
	}
	printf("最小值为%d\n",a[minRow][minCol]);	
}
