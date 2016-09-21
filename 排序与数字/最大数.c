#include<stdio.h>
int main()
{
	int i,t;
	float math[10],max;
	for(i=0;i<10;i++)
	{
		scanf("%f",&math[i]);
	}
	max=math[0];
	t=0;  /*设最大数位置*/
	for(i=1;i<10;i++)
	{
		if(math[i]>max)
		{
			t=i;
			max=math[i];
		}
	}
	printf("t=%d,max=%f\n",t,max);
	
}
