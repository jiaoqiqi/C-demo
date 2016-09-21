#include<stdio.h>
#include<math.h>
float icon,x1,x2,p,q;
void dayu(float a,float b)
{
	x1=(-b+sqrt(icon))/(2*a);
	x2=(-b-sqrt(icon))/(2*a);
}
void dengyu(float a,float b)
{
	x1=x2=(-b)/(2*a);
}
void xiaoyu(float a,float b)
{
	p=-b/(2*a);
	q=sqrt((-icon))/(2*a);
}
int main()
{

	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	icon=b*b-4*a*c;
	if(icon>0)
	{
		dayu(a,b);
		printf("x1=%.3f x2=%.3f",x1,x2);
	}
	else if(icon==0)
	{
		dengyu(a,b);
		printf("x1=%.3f x2=%.3f",x1,x2);
	}
	else if(icon<0)

	{
		xiaoyu(a,b);
                printf("x1=%.3f+%.3fi x2=%.3f+%.3fi",p,q,p,q);
	}
}
