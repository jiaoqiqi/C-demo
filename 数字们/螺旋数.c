#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int i,j;
	int m=1;
	for(i=0 ; i<(n/2)+1 ; i++)
	{
		for(j=i ; j<n-i ; j++)
			arr[i][j]=m++;
		for(j=i+1 ; j<n-i ;j++ )
			arr[j][n-i-1]=m++;
		for(j=n-2-i ; j>=i ; j--)
			arr[n-1-i][j]=m++;
		for(j=n-2-i;j>i;j--)
			arr[j][i]=m++;
	}
	for(i=0 ; i<n ;i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d",arr[i][j]);
			if(j<n-1)
				printf(" ");
		}
		if(i<n-1)
		{
			printf("\n");
		}
	}
}

