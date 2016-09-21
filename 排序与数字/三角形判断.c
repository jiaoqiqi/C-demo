#include<stdio.h>
int main ()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
		{
			if(a>b && a>c)
			{	t=a;
				a=c;
				c=t;
				if(c*c==a*a+b*b)
					printf("直角三角形");
				else if(c*c>a*a+b*b)
					printf("钝角三角形");
				else
					printf("锐角三角形");
			}
			else if(b>a && b>c)
			{	t=b;
				b=c;
				c=t;
				if(c*c==a*a+b*b)
                                        printf("直角三角形");
                                else if(c*c>a*a+b*b)
                                        printf("钝角三角形");
                                else
                                        printf("锐角三角形");
			}
			else if(c>a && c>b)
			{
				if(c*c==a*a+b*b)
					printf("直角三角形");
				else if(c*c>a*a+b*b)
                                        printf("钝角三角形");
                                else
                                        printf("锐角三角形");

			}
			else if(a==b || a==c || b==c)
				printf("等腰三角形");
			else if(a==b && a==c && b==c)
				printf("等边三角形");

		}
}
