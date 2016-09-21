#include<stdio.h>
int main()
{
	int month;
	int f[13]={1,1};
	for(month=2;month<13;month++)
	{
		f[month]=f[month-1]+f[month-2];
	}
	for(month=0;month<13;month++)
	{
		printf("%d\n",f[month]);
	}
}
