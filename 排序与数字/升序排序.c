#include<stdio.h>
int main()
{
	int i,j,k;
	float math[10],temp;
	printf("please enter:");
	for(i=0;i<10;i++)
		scanf("%f",&math[i]);
	for(i=0;i<9;i++)
	{
		k=i;
		for(j=i+1;j<10;j++);
		{
			if(math[k]>math[j])
				k=j;
		}
		if(k!=i)
		{
			temp=math[i];
			math[i]=math[k];
			math[k]=temp;
		}
	}
	for(i=0;i<10;i++)
		printf("%5.f",math[i]);
}
