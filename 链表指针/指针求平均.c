#include<stdio.h>
void main()
{
	double numbers[10],avge,*p;
	p=numbers;
	int i;
	avge=0;
	for(i=0;i<10;i++)
	{
		scanf("%lf",p+i);
		avge+=*(p+i);

	}
	avge/=10;
	printf("the avge of the numbers is :%lf\n",avge);
}
