#include<stdio.h>
int main()
{
	char suan;
	float a,b,c;
	scanf("%f%s%f",&a,&suan,&b);
	switch(suan)
	{
		case '+':
			c=a+b;
			printf("%f",c);
			break;
		case '-':
			c=a-b;
			printf("%f",c);
			break;
		case '*':
			c=a*b;
			printf("%f",c);
			break;
		case '/':
			c=a/b;
			printf("%f",c);
			break;
	}
	return 0;
}
