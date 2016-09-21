#include<stdio.h>
int bijiao(int a , int b , int c)
{
	int max;
	if(a>b && a>c)
		max=a;
	if(b>a && b>c)
		max=b;
	else
		max=c;
	return max;
}

int shuliang(int a, int b , int c)
{
	int i;
	for (i = bijiao(a,b,c); ; i++)
	{
		if(i%a==0 && i%b==0 && i%c==0)
			break;
	}
	return i;
}

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	bijiao(a,b,c);
	printf("%d",shuliang(a,b,c));
}