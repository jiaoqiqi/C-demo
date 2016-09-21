#include<stdio.h>
int main()
{
int a,i,n;
n=1;
scanf("%d",&a);
for(i=1;i<=a;++i)
{	
	n*=i;
}
printf("%d\n",n);
return 0;
}
