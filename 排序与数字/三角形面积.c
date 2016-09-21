#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c;
	double t,area;
		scanf("%f%f%f",&a,&b,&c);
	t=(a+b+c)/2.0;
	area=sqrt(t*(t-a)*(t-b)*(t-c));
	printf("%f",area);
}
