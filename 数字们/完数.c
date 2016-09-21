#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a;
	for(a=1;a<=n;a++)
	{
		int sum =0 ; 
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				sum+=i;
			}
		}
		if(a==sum)
			printf("%d ",a);
	}
}
