#include <stdio.h>
int main( )
{
	float a,b,c;
	char ch;
	scanf("%f%c%f",&a,&ch,&b);
	if (ch=='+'||ch=='-'||ch=='*'||ch=='/')
	{
    if (ch=='+')
	c=a+b;
	if (ch=='-')
	c=a-b;
	if (ch=='*')
	c=a*b;
	if (ch=='/')
	c=a/b;
	if (b==0)
	printf("error");
	else
	printf("%f%c%f",a,ch,b),
	printf("="),
	printf("%f",c);
	} 
	else
	printf("error");
}
