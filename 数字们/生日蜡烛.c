#include<stdio.h>
int main()
{
	int n,i,j,m,flag=0,k=0,a;
	int c[100];
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		a=0;
		k=0;
		for(j=i;j<n;j++)
		{
			if(a<n)
			{
				a+=j;
				c[k]=j;
				k++;
			}
		}
		if(a==n)
		{
			printf("%d=",a);
			for(m=0;m<k-1;m++)
			{
				printf("%d+",c[m]);
			}
			printf("%d\n",c[m]);
			flag=1;
		}
	}
	if(flag==0)
	printf("NONE");
}
