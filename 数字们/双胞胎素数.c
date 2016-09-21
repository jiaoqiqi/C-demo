#include<stdio.h>
int jishu(int number)
{
	if(number%2==0)
		return 0;
	else
		return 1;
}
int sushu(int number)
{
	int i;
	for(i=2 ; i<number/2;i++)
	{
		if(number%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int number;
	for(number=a;number<b-1;number++)
	{
		if(jishu(number))
			if(sushu(number))
				if(jishu(number+2))
					if(sushu(number+2))
						printf("(%d,%d)",number,number+2);
	} 
}
